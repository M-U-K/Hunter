/*
** EPITECH PROJECT, 2019
** event_game_diff for hunter
** File description:
** event_game_diff.c
*/

#include "my_functions.h"

void game_blue(data_t *data)
{
    if (data->choice->difficulty == 1) {
        data->game->rec_cap.left = 1;
        data->game->rec_cap.top = 2;
        data->game->rec_cap.width = 48;
        data->game->rec_cap.height = 48;
        data->game->rec_town.left = 1;
        data->game->rec_town.top = 101;
        data->game->rec_town.width = 48;
        data->game->rec_town.height = 86;
        data->game->rec_life.left = 0;
        data->game->rec_life.top = 1;
        data->game->rec_life.width = 240;
        data->game->rec_life.height = 185/4;
        data->game->rec_army.left = 1;
        data->game->rec_army.top = 1;
        data->game->rec_army.width = 100;
        data->game->rec_army.height = 28;
    }
}

void game_green(data_t *data)
{
    if (data->choice->difficulty == 2) {
        data->game->rec_cap.left = 1;
        data->game->rec_cap.top = 190;
        data->game->rec_cap.width = 48;
        data->game->rec_cap.height = 48;
        data->game->rec_town.left = 1;
        data->game->rec_town.top = 289;
        data->game->rec_town.width = 48;
        data->game->rec_town.height = 86;
        data->game->rec_life.left = 0;
        data->game->rec_life.top = 49;
        data->game->rec_life.width = 240;
        data->game->rec_life.height = 185/4;
        data->game->rec_army.left = 1;
        data->game->rec_army.top = 32;
        data->game->rec_army.width = 100;
        data->game->rec_army.height = 28;
    }
}

void game_yellow(data_t *data)
{
    if (data->choice->difficulty == 3) {
        data->game->rec_cap.left = 1;
        data->game->rec_cap.top = 378;
        data->game->rec_cap.width = 48;
        data->game->rec_cap.height = 48;
        data->game->rec_town.left = 1;
        data->game->rec_town.top = 478;
        data->game->rec_town.width = 48;
        data->game->rec_town.height = 86;
        data->game->rec_life.left = 0;
        data->game->rec_life.top = 97;
        data->game->rec_life.width = 240;
        data->game->rec_life.height = 185/4;
        data->game->rec_army.left = 1;
        data->game->rec_army.top = 63;
        data->game->rec_army.width = 100;
        data->game->rec_army.height = 28;
    }
}

void game_black(data_t *data)
{
    if (data->choice->difficulty == 4) {
        data->game->rec_cap.left = 1;
        data->game->rec_cap.top = 566;
        data->game->rec_cap.width = 48;
        data->game->rec_cap.height = 48;
        data->game->rec_town.left = 1;
        data->game->rec_town.top = 666;
        data->game->rec_town.width = 48;
        data->game->rec_town.height = 86;
        data->game->rec_life.left = 0;
        data->game->rec_life.top = 145;
        data->game->rec_life.width = 240;
        data->game->rec_life.height = 185/4;
        data->game->rec_army.left = 1;
        data->game->rec_army.top = 94;
        data->game->rec_army.width = 100;
        data->game->rec_army.height = 28;
    }
}
