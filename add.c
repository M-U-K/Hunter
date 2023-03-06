/*
** EPITECH PROJECT, 2019
** add for hunter
** File description:
** add.c
*/

#include "my_functions.h"

void add(data_t *data, int type, int x, int y)
{
    mob_t *new = malloc(sizeof(mob_t));

    set_add(data, type, new);
    new->pos = random_pos(x, y);
    set_texture(data, type, new);
    sfSprite_setScale(new->sprite, new->size);
    sfSprite_setPosition(new->sprite, new->pos);
    sfSprite_setTextureRect(new->sprite, new->rect);
    new->next = data->game->moblist->first;
    data->game->moblist->nbr++;
    data->game->moblist->first = new;
}

void draw_mob(data_t *data)
{
    mob_t *actual;

    actual = data->game->moblist->first;
    while (actual->next) {
        sfRenderWindow_drawSprite(data->window, actual->sprite, NULL);
        actual = actual -> next;
    }
}

void acting_mob(data_t *data, mob_t *actual)
{
    sfIntRect die = {0, 0, 45, 46};

    mob_move1(actual);
    mob_move2(actual);
    mob_beacon(actual);
    sfSprite_setPosition(actual->sprite, actual->pos);
    if (actual->pos.x <= actual->coord.x + 10 && actual->po\
s.x >= actual->coord.x - 10 && actual->act == 0)
        actual->act = 1;
    mob_stop1(actual);
    mob_stop2(actual);
    mob_hit1(data, actual);
    mob_hit2(data, actual);
    mob_hit3(data, actual);
    mob_hit4(data, actual);
    pre_explode(data, actual, die);
    explode(actual);
}

void update_mob(data_t *data)
{
    mob_t *actual;

    actual = data->game->moblist->first;
    while (actual->next) {
        if (actual->next->clear == 1) {
            actual->save_next_next = actual->next->next;
            free(actual->next->sprite);
            free(actual->next);
            actual->next = actual->save_next_next;
            data->game->moblist->nbr--;
        }
        actual->past_time = actual->actual_time;
        actual->actual_time = \
sfTime_asSeconds(sfClock_getElapsedTime(data->clock));
        actual->diff_time += (actual->actual_time - actual->p\
ast_time)* data->game_speed;
        actual->diff_time_speed = (actual->actual_time - actu\
al->past_time) * data->game_speed;
        acting_mob(data, actual);
        actual = actual -> next;
    }
}
