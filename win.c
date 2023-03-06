/*
** EPITECH PROJECT, 2019
** win for hunter
** File description:
** win.c
*/

#include "my_functions.h"

win_t *init_win(void)
{
    win_t *new = malloc(sizeof(win_t));

    new->texture = sfTexture_createFromFile("sprite/win.jpg", NULL);
    new->sprite = sfSprite_create();
    return (new);

}

void event_win_2(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 852*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 765*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 359*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 98*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;

    if (hitbox(data)){
        sfRenderWindow_close(data->window);
        sfMusic_destroy(data->soviet);
    }
}

void event_win(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)) {
        if (data->event.type == sfEvtMouseButtonPressed) {
            event_win_2(data);
        }
        if (data->event.type == sfEvtClosed) {
            sfRenderWindow_close(data->window);
            sfMusic_destroy(data->soviet);
        }
    }
}

void win(data_t *data)
{
    sfSprite_setTexture(data->win->sprite, data->win->texture, sfTrue);
    sfRenderWindow_setMouseCursorVisible(data->window, 1);
    while (sfRenderWindow_isOpen(data->window)) {
        sfRenderWindow_drawSprite(data->window, data->win->sprite, NULL);
        sfRenderWindow_display(data->window);
        event_win(data);
    }
}
