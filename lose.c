/*
** EPITECH PROJECT, 2019
** lose for hunter
** File description:
** lose.c
*/

#include "my_functions.h"

lose_t *init_lose(void)
{
    lose_t *new = malloc(sizeof(start_t));

    new->texture = sfTexture_createFromFile("sprite/game over.jpg", NULL);
    new->sprite = sfSprite_create();
    return (new);
}

void event_lose_1(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 3*sfRenderWindow_getSize(data->window).x/data->size_window_x;
    data->min_y = 3*sfRenderWindow_getSize(data->window).y/data->size_window_y;
    data->lenght_x = 458*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 167*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    if (hitbox(data)){
        sfRenderWindow_close(data->window);
        sfMusic_destroy(data->soviet);
    }
}

void event_lose(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)) {
        if (data->event.type == sfEvtMouseButtonPressed) {
            event_lose_1(data);
        }
        if (data->event.type == sfEvtClosed) {
            sfRenderWindow_close(data->window);
            sfMusic_destroy(data->soviet);
        }
    }
}

void lose(data_t *data)
{
    sfSprite_setTexture(data->lose->sprite, data->lose->texture, sfTrue);
    sfRenderWindow_setMouseCursorVisible(data->window, 1);
    while (sfRenderWindow_isOpen(data->window)) {
        sfRenderWindow_drawSprite(data->window, data->lose->sprite, NULL);
        sfRenderWindow_display(data->window);
        event_lose(data);
    }
}
