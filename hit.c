/*
** EPITECH PROJECT, 2019
** hit for hunter
** File description:
** hit.c
*/

#include "my_functions.h"

void hit(data_t *data, mob_t *actual)
{
    data->game->rec_life.width -= actual->strenght;
    sfSprite_setTextureRect(data->game->sprite_life, data->game->rec_life);
    if (data->game->rec_life.width <= 0) {
        lose(data);
    }
}

void pre_explode(data_t *data, mob_t *actual, sfIntRect die)
{
    if (actual->act == 3 && actual->stop == 0) {
        if (actual->type == 1)
            actual->pos.x += 20;
        if (actual->type == 2)
            actual->pos.x += 20;
        if (actual->type == 3) {
            actual->size.x = 2;
            actual->size.y = 2;
            sfSprite_setScale(actual->sprite, actual->size);
            actual->pos.x += 25;
        }
        if (actual->type == 4)
            actual->pos.x += 20;
        actual->act = 4;
        actual->rect = die;
        sfSprite_setTexture(actual->sprite, data->ga\
me->texture_mob->die, sfTrue);
        sfSprite_setTextureRect(actual->sprite, actual->rect);
    }
}

void explode(mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->act == 4 && actual->stop == 0) {
        actual->rect.top = 0;
        if (actual->rect.left >= 45+45+45) {
            actual->rect.left = 0;
            actual->clear = 1;
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 45;
        actual->diff_time = 0;
    }
}
