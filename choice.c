/*
** EPITECH PROJECT, 2019
** choice for hunter
** File description:
** choice.c
*/

#include "my_functions.h"

choice_t *init_choice(void)
{
    choice_t *new = malloc(sizeof(choice_t));

    new->difficulty = 0;
    new->texture = sfTexture_createFromFile("sprite/choice.png", NULL);
    new->sprite = sfSprite_create();
    return (new);
}

void event_choice_exit(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 4*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 6*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 281*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 102*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    if (hitbox(data)){
        sfRenderWindow_close(data->window);
        sfMusic_destroy(data->soviet);
    }
}

void event_choice(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->window, &data->event)) {
        if (data->event.type == sfEvtMouseButtonPressed) {
            event_choice_diff_1(data);
            event_choice_diff_2(data);
            event_choice_diff_3(data);
            event_choice_diff_4(data);
            event_choice_exit(data);
        }
        if (data->event.type == sfEvtClosed) {
            sfRenderWindow_close(data->window);
            sfMusic_destroy(data->soviet);
        }
    }
}

void choice(data_t *data)
{
    sfSprite_setTexture(data->choice->sprite, data->choice->texture, sfTrue);
    while (sfRenderWindow_isOpen(data->window)) {
        sfRenderWindow_drawSprite(data->window, data->choice->sprite, NULL);
        sfRenderWindow_display(data->window);
        event_choice(data);
    }

}
