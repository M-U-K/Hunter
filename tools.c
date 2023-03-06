/*
** EPITECH PROJECT, 2019
** tools for hunter
** File description:
** tools.c
*/

#include "my_functions.h"

int hitbox(data_t *data)
{
    if (data->x > data->min_x && data->x < data->min_x + data->lenght_x \
&& data->y < data->min_y + data->lenght_y && data->y > data->min_y)
        return (1);
    return (0);
}

void add_score(data_t *data, int x)
{
    add_score_100(data, x);
    add_score_200(data, x);
}

sfVector2f random_pos(int x, int y)
{
    sfVector2f pos = {0, 0};

    pos.x = x;
    pos.y = y;
    return (pos);
}

sfVector2f change_coord(data_t *data, sfVector2f coord)
{
    coord.y += rand()%(120*sfRenderWindow_getSize(data->window).y\
/data->size_window_y);
    return (coord);
}
