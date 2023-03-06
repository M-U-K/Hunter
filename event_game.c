/*
** EPITECH PROJECT, 2019
** event_game for hunter
** File description:
** event_game.c
*/

#include "my_functions.h"

void event_game_pre(data_t *data)
{
    if (data->pos_cursor.x != sfMouse_get\
PositionRenderWindow(data->window).x && \
data->pos_cursor.y != sfMouse_getPositionRenderWindow(data->window).y) {
        data->pos_cursor.x = sfMouse_\
getPositionRenderWindow(data->window).x-108;
        data->pos_cursor.y = sfMouse_\
getPositionRenderWindow(data->window).y-116;
        sfSprite_setTexture(data->sprite_cursor, data->texture_cursor, sfTrue);
        sfSprite_setPosition(data->sprite_cursor, data->pos_cursor);
    }
    if (data->event.type == sfEvtClosed) {
        sfRenderWindow_close(data->window);
        sfMusic_destroy(data->soviet);
    }
}

void event_game_hit(data_t *data, mob_t *actual)
{
    if (sfFloatRect_contains(&data->hit_rect, data->hit_x_min, \
data->hit_y_min) && actual->act < 3 && data->hit == 0) {
        actual->max_life --;
        if (actual->max_life <= 0 && actual->type == 3) {
            add_score(data, 200);
            sfText_setString(data->text, data->score);
            actual->act = 3;
        }
        if (actual->max_life <= 0 && actual->type != 3) {
            add_score(data, 100);
            sfText_setString(data->text, data->score);
            actual->act = 3;
        }
        data->hit = 1;
        actual->stop = 0;
        data->hit_rect.top = 0;
        data->hit_rect.left = 0;
        data->hit_rect.width = 0;
        data->hit_rect.height = 0;
    }
}

void event_game_2(data_t *data, mob_t *actual)
{
    event_type1(data, actual);
    event_type2(data, actual);
    event_type3(data, actual);
    event_type4(data, actual);
    event_game_hit(data, actual);
}

void event_game_click(data_t *data, mob_t *actual)
{
    data->y = data->event.mouseButton.y;
    data->x = data->event.mouseButton.x;
    data->min_x = 6*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->min_y = 972*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    data->lenght_x = 281*sfRenderWindow_getSize(data->window).x/\
data->size_window_x;
    data->lenght_y = 102*sfRenderWindow_getSize(data->window).y/\
data->size_window_y;
    if (hitbox(data)){
        sfRenderWindow_close(data->window);
        sfMusic_destroy(data->soviet);
    }
    while (actual->next) {
        event_game_2(data, actual);
        actual = actual->next;
    }
}

void event_game(data_t *data)
{
    mob_t *actual;

    data->hit = 0;
    data->hit_rect.top = 0;
    data->hit_rect.left = 0;
    data->hit_rect.height = 0;
    data->hit_rect.width = 0;

    actual = data->game->moblist->first;
    while (sfRenderWindow_pollEvent(data->window, &data->event)) {
        event_game_pre(data);
        if (data->event.type == sfEvtMouseButtonPressed) {
            event_game_click(data, actual);
        }
    }
}
