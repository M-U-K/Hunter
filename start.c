/*
** EPITECH PROJECT, 2019
** start for hunter
** File description:
** start.c
*/

#include "my_functions.h"

start_t *init_start(void)
{
    start_t *new = malloc(sizeof(start_t));

    new->texture = sfTexture_createFromFile("sprite/start.png", NULL);
    new->sprite = sfSprite_create();
    return (new);
}

void event_start_close(data_t *data)
{
    if (data->event.type == sfEvtClosed) {
        sfRenderWindow_close(data->window);
        sfMusic_destroy(data->soviet);
    }
}

void event_start1(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 1204*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 394*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 281*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 102*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    if (hitbox(data)){
        choice(data);
    }
}

void event_start(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)) {
        event_start1(data);
        data->y = data->event.mouseButton.y;
        data->x = data->event.mouseButton.x;
        data->min_x = 1204*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
        data->min_y = 653*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
        data->lenght_x = 281*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
        data->lenght_y = 102*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
        if (hitbox(data)){
            sfRenderWindow_close(data->window);
            sfMusic_destroy(data->soviet);
        }
        event_start_close(data);
    }
}

void start(data_t *data)
{
    sfSprite_setTexture(data->start->sprite, data->start->texture, sfTrue);
    while (sfRenderWindow_isOpen(data->window)) {
        sfRenderWindow_drawSprite(data->window, data->start->sprite, NULL);
        sfRenderWindow_display(data->window);
        event_start(data);
    }
}
