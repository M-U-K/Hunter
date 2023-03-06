/*
** EPITECH PROJECT, 2019
** mob_hit2 for hunter
** File description:
** mob_hit2.c
*/

#include "my_functions.h"

void mob_stop_hit3(data_t *data)
{
    if (data->cry == 0) {
        data->game->rec_cap.top += 50;
        sfSprite_setTextureRect(data->game->sprite_cap, data->game->rec_cap);
        data->cry = 1;
    }
}

void mob_hit3(data_t *data, mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 3 && \
actual->act == 2 && actual->stop == 0) {
        actual->rect.top = 116;
        if (actual->rect.left >= 600) {
            actual->rect.left = 0;
            actual->stop = 1;
            mob_stop_hit3(data);
            hit(data, actual);
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 100;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 2 && actual->type == 3 && \
actual->act == 2 && actual->stop == 1) {
        actual->rect.left = 0;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->diff_time = 0;
        actual->stop = 0;
    }
}

void mob_stop_hit4(data_t *data)
{
    if (data->cry == 0) {
        data->game->rec_cap.top += 50;
        sfSprite_setTextureRect(data->game->sprite_cap, data->game->rec_cap);
        data->cry = 1;
    }
}

void mob_hit4(data_t *data, mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 4 && \
actual->act == 2 && actual->stop == 0) {
        actual->rect.top = 102;
        if (actual->rect.left >= 528-88-88) {
            actual->rect.left = 0;
            actual->stop = 1;
            mob_stop_hit4(data);
            hit(data, actual);
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 88;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 1 && actual->type == 4 && \
actual->act == 2 && actual->stop == 1) {
        actual->rect.left = 0;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->diff_time = 0;
        actual->stop = 0;
    }
}
