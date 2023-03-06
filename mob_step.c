/*
** EPITECH PROJECT, 2019
** mob_step for hunter
** File description:
** mob_step.c
*/

#include "my_functions.h"

void mob_move1(mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 1 && actual->act == 0) {
        if (actual->rect.left >= 504-84)
            actual->rect.left = 1;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 84;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 0.2 && actual->type == 2 && actual->act == 0) {
        if (actual->rect.left >= 468-78)
            actual->rect.left = 1;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 78;
        actual->diff_time = 0;
    }
}

void mob_move2(mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 3 && actual->act == 0) {
        if (actual->rect.left >= 600-100)
            actual->rect.left = 1;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 100;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 0.2 && actual->type == 4 && actual->act == 0) {
        if (actual->rect.left >= 528-88)
            actual->rect.left = 1;
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 88;
        actual->diff_time = 0;
    }
}

void mob_beacon(mob_t *actual)
{
    if (actual->pos.x < actual->coord.x && actual->act == 0){
        actual->pos.x += actual->speed*actual->diff_time_speed;
    }
    if (actual->pos.x > actual->coord.x && actual->act == 0){
        actual->pos.x -= actual->speed*actual->diff_time_speed;
    }
    if (actual->pos.y < actual->coord.y && actual->act == 0){
        actual->pos.y += actual->speed*actual->diff_time_speed-3;
    }
    if (actual->pos.y > actual->coord.y && actual->act == 0){
        actual->pos.y -= actual->speed*actual->diff_time_speed-3;
    }
}

void mob_stop1(mob_t *actual)
{
    if (actual->diff_time >= 0.2 && actual->type == 1 && actual->act == 1) {
        actual->rect.top = 53;
        if (actual->rect.left >= 504-84-84-84) {
            actual->rect.left = 0;
            actual->act = 2;
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 84;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 0.2 && actual->type == 2 && actual->act == 1) {
        actual->rect.top = 57;
        if (actual->rect.left >= 468-78) {
            actual->rect.left = 0;
            actual->act = 2;
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 78;
        actual->diff_time = 0;
    }
}

void mob_stop2(mob_t *actual)
{
    if (actual->diff_time >= 0.3 && actual->type == 3 && actual->act == 1) {
        actual->rect.top = 58;
        if (actual->rect.left >= 600-100-100) {
            actual->rect.left = 0;
            actual->act = 2;
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 100;
        actual->diff_time = 0;
    }
    if (actual->diff_time >= 0.2 && actual->type == 4 && actual->act == 1) {
        actual->rect.top = 51;
        if (actual->rect.left >= 528-88-88-88) {
            actual->rect.left = 0;
            actual->act = 2;
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual->rect.left += 88;
        actual->diff_time = 0;
    }
}
