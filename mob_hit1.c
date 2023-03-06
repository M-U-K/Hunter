/*
** EPITECH PROJECT, 2019
** mob_hit1 for hunter
** File description:
** mob_hit1.c
*/

#include "my_functions.h"

void mob_stop_hit1(data_t *data)
{
    if (data->cry == 0) {
        data->game->rec_cap.top += 50;
        sfSprite_setTextureRect(data->game->sprite_cap, data->game->rec_cap);
        data->cry = 1;
    }
}

void mob_hit1(data_t *data, mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 1 && \
actual->act == 2 && actual->stop == 0) {
        actual->rect.top = 104;
        if (actual->rect.left >= 504-84-84) {
            actual->rect.left = 0;
            actual->stop = 1;
            mob_stop_hit1(data);
            hit(data, actual);
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 84;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 0.2 && actual->type == 1 && \
actual->act == 2 && actual->stop == 1) {
        actual->rect.left = 0;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->diff_time = 0;
        actual->stop = 0;
    }
}

void mob_stop_hit2(data_t *data)
{
    if (data->cry == 0) {
        data->game->rec_cap.top += 50;
        sfSprite_setTextureRect(data->game->sprite_cap, data->game->rec_cap);
        data->cry = 1;
    }
}

void mob_hit2(data_t *data, mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 2 && \
actual->act == 2 && actual->stop == 0) {
        actual->rect.top = 114;
        if (actual->rect.left >= 468) {
            actual->rect.left = 78;
            actual->stop = 1;
            mob_stop_hit2(data);
            hit(data, actual);
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 78;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 0.5 && actual->type == 2 && \
actual->act == 2 && actual->stop == 1) {
        actual->rect.left = 0;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->diff_time = 0;
        actual->stop = 0;
    }
}
