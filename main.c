/*
** EPITECH PROJECT, 2019
** main for hunter
** File description:
** main.c
*/

#include "my_functions.h"

int main(void)
{
    data_t *data = init_data();

    sfMusic_setVolume(data->soviet, 20);
    sfMusic_play(data->soviet);
    sfMusic_setLoop(data->soviet, 1);
    sfClock_restart(data->clock);
    sfRenderWindow_setFramerateLimit(data->window, 30);
    start(data);
    return (0);
}
