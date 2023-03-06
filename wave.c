/*
** EPITECH PROJECT, 2019
** wave for hunter
** File description:
** wave.c
*/

#include "my_functions.h"

wave_t *init_wave(void)
{
    wave_t *wave = malloc(sizeof(wave_t));

    wave->wave_push = 0;
    wave->nbr_wave = 0;
    wave->dca = 0;
    wave->light = 0;
    wave->heavy = 0;
    wave->recon = 0;
    return (wave);
}

moblist_t *init_moblist(void)
{
    moblist_t *list = malloc(sizeof(moblist_t));
    mob_t *mob = malloc(sizeof(mob_t));

    mob->next = NULL;
    list->first = mob;
    list->nbr = 0;
    list->delete = 0;
    return (list);
}

void wave_enemy(data_t *data)
{
    int cmp = 0;

    if (data->game->moblist->nbr == 1) {
        data->game->wave->wave_push = 0;
        data->game->moblist->first = data->game->moblist->first->next;
        data->game->moblist->nbr = 0;
        if (data->cry == 1) {
            data->cry = 0;
            data->game->rec_cap.top -= 50;
            sfSprite_setTextureRect(data->game->spri\
te_cap, data->game->rec_cap);
        }
    }
    if (data->choice->difficulty == 1 && data->game->wave->wave_push == 0)
        wave_enemy_diff_1(data, cmp);
    if (data->choice->difficulty == 2 && data->game->wave->wave_push == 0)
        wave_enemy_diff_2(data, cmp);
    if (data->choice->difficulty == 3 && data->game->wave->wave_push == 0)
        wave_enemy_diff_3(data, cmp);
    if (data->choice->difficulty == 4 && data->game->wave->wave_push == 0)
        wave_enemy_diff_4(data, cmp);
}
