/*
** EPITECH PROJECT, 2019
** set for hunter
** File description:
** set.c
*/

#include "my_functions.h"

void set_game2(data_t *data)
{
    sfSprite_setScale(data->game->sprite_cap, data->game->scale_cap);
    sfSprite_setPosition(data->game->sprite_cap, data->game->pos_cap);
    sfSprite_setScale(data->game->sprite_army, data->game->scale_army);
    sfSprite_setPosition(data->game->sprite_army, data->game->pos_army);
    sfSprite_setScale(data->game->sprite_town, data->game->scale_town);
    sfSprite_setPosition(data->game->sprite_town, data->game->pos_town);
    sfSprite_setScale(data->game->sprite_life, data->game->scale_life);
    sfSprite_setPosition(data->game->sprite_life, data->game->pos_life);
}

void set_game(data_t *data)
{
    set_game2(data);
    sfSprite_setTexture(data->game->sprite, data->game->texture, sfTrue);
    sfSprite_setTexture(data->game->sprite_army, \
data->game->texture_army, sfTrue);
    sfSprite_setTexture(data->game->sprite_town, \
data->game->texture_tools, sfTrue);
    sfSprite_setTexture(data->game->sprite_cap, \
data->game->texture_tools, sfTrue);
    sfSprite_setTexture(data->game->sprite_life, \
data->game->texture_life, sfTrue);
    sfSprite_setTextureRect(data->game->sprite_cap, data->game->rec_cap);
    sfSprite_setTextureRect(data->game->sprite_town, data->game->rec_town);
    sfSprite_setTextureRect(data->game->sprite_army, data->game->rec_army);
    sfSprite_setTextureRect(data->game->sprite_life, data->game->rec_life);
}

sfIntRect set_rect(int type)
{
    sfIntRect rect_dca = {0, 0, 84, 50};
    sfIntRect rect_recon = {0, 0, 76, 55};
    sfIntRect rect_heavy = {0, 0, 86, 56};
    sfIntRect rect_light = {0, 0, 86, 49};

    if (type == 1)
        return (rect_dca);
    if (type == 2)
        return (rect_recon);
    if (type == 3)
        return (rect_heavy);
    if (type == 4)
        return (rect_light);
    return (rect_dca);
}

void set_add(data_t *data, int type, mob_t *new)
{
    sfVector2f size = {1.2, 1.2};
    sfVector2f coord = {150, 420};

    new->save_next_next = NULL;
    new->sprite = sfSprite_create();
    new->type = type;
    new->size = size;
    new->rect = set_rect(type);
    new->speed = set_speed(type);
    new->clear = 0;
    new->max_life = 1;
    if (new->type == 3)
        new->max_life = 3;
    new->strenght = 1;
    new->actual_time = sfTime_asSeconds(sfClock_getElapsedTime(data->clock));
    new->past_time = 0;
    new->diff_time = 0;
    new->act = 0;
    new->stop = 0;
    new->coord = change_coord(data, coord);
}

int set_speed(int type)
{
    if (type == 1)
        return (150);
    if (type == 2)
        return (175);
    if (type == 3)
        return (100);
    if (type == 4)
        return (125);
    return (0);
}
