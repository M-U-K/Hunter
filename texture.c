/*
** EPITECH PROJECT, 2019
** texture for hunter
** File description:
** texture.c
*/

#include "my_functions.h"

texture_t *init_texture(void)
{
    texture_t *new = malloc(sizeof(texture_t));

    new->die = sfTexture_createFromFile("sprite/die.png", NULL);
    new->dca = sfTexture_createFromFile("sprite/dca.png", NULL);
    new->heavy = sfTexture_createFromFile("sprite/heavy.png", NULL);
    new->recon = sfTexture_createFromFile("sprite/recon.png", NULL);
    new->light = sfTexture_createFromFile("sprite/light.png", NULL);
    return (new);
}

void set_texture(data_t *data, int type, mob_t *new)
{
    if (type == 1)
        sfSprite_setTexture(new->sprite, \
data->game->texture_mob->dca, sfTrue);
    if (type == 2)
        sfSprite_setTexture(new->sprite, \
data->game->texture_mob->recon, sfTrue);
    if (type == 3)
        sfSprite_setTexture(new->sprite, \
data->game->texture_mob->heavy, sfTrue);
    if (type == 4)
        sfSprite_setTexture(new->sprite, \
data->game->texture_mob->light, sfTrue);
}
