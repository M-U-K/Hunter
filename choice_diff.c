/*
** EPITECH PROJECT, 2019
** choice_diff for hunter
** File description:
** choice_diff.c
*/

#include "my_functions.h"

void event_choice_diff_1(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 59*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 432*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 333*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 482*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    if (hitbox(data)){
        data->choice->difficulty = 1;
        game(data);
    }
}

void event_choice_diff_2(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 549*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 432*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 333*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 482*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;

    if (hitbox(data)){
        data->choice->difficulty = 2;
        game(data);
    }
}

void event_choice_diff_3(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 1060*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 432*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 333*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 482*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;

    if (hitbox(data)){
        data->choice->difficulty = 3;
        game(data);
    }
}

void event_choice_diff_4(data_t *data)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 1548*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 432*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 333*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 482*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    if (hitbox(data)){
        data->choice->difficulty = 4;
        game(data);
    }
}
