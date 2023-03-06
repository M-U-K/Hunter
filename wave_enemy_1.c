/*
** EPITECH PROJECT, 2019
** wave_enemy_1 for hunter
** File description:
** wave_enemy_1.c
*/

#include "my_functions.h"

void wave_enemy_diff_1_bis(data_t *data, int cmp)
{
    for (cmp = 0; cmp != data->game->wave->light; cmp ++)
        add(data, 4, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
    for (cmp = 0; cmp != data->game->wave->heavy; cmp ++)
        add(data, 3, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
    add(data, 3, 20000000, 100000000);
    data->game->wave->wave_push = 1;
    data->game->wave->nbr_wave++;
}

void wave_enemy_diff_1(data_t *data, int cmp)
{
    if (data->choice->difficulty == 1 && data->game->wave->wave_push == 0) {
        data->game_speed = 1;
        data->game->wave->dca = 1 + data->game->wave->nbr_wave;
        data->game->wave->light = 2 + data->game->wave->nbr_wave;
        data->game->wave->heavy = 0 + data->game->wave->nbr_wave;
        data->game->wave->recon = 1 + data->game->wave->nbr_wave;
        for (cmp = 0; cmp != data->game->wave->dca; cmp ++)
            add(data, 1, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y))-200);
        for (cmp = 0; cmp != data->game->wave->recon; cmp ++)
            add(data, 2, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
        wave_enemy_diff_1_bis(data, cmp);
    }
}

void wave_enemy_diff_2_bis(data_t *data, int cmp)
{
    for (cmp = 0; cmp != data->game->wave->light; cmp ++)
        add(data, 4, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
    for (cmp = 0; cmp != data->game->wave->heavy; cmp ++)
        add(data, 3, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
    add(data, 3, 20000000, 100000000);
    data->game->wave->wave_push++;
    data->game->wave->nbr_wave++;
}

void wave_enemy_diff_2(data_t *data, int cmp)
{
    if (data->choice->difficulty == 2 && data->game->wave->wave_push == 0) {
        data->game_speed = 1.25;
        data->game->wave->dca = 2+data->game->wave->nbr_wave;
        data->game->wave->light = 1+data->game->wave->nbr_wave;
        data->game->wave->heavy = 1+data->game->wave->nbr_wave;
        data->game->wave->recon = 2+data->game->wave->nbr_wave;
        for (cmp = 0; cmp != data->game->wave->dca; cmp ++)
            add(data, 1, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
        for (cmp = 0; cmp != data->game->wave->recon; cmp ++)
            add(data, 2, (rand()%(300*sfRenderWindow_getSize(data->w\
indow).x/data->size_window_x)+2000), (rand()%(1500*sfRenderWindow_ge\
tSize(data->window).y/data->size_window_y)-200));
        wave_enemy_diff_2_bis(data, cmp);
    }
}
