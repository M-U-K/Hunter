/*
** EPITECH PROJECT, 2019
** my_structs.h
** File description:
** classic header
*/

#ifndef STR_H
#define STR_H
#include "my_functions.h"

typedef struct start_s
{
    sfTexture *texture;
    sfSprite *sprite;
}start_t;

typedef struct choice_s
{
    sfTexture *texture;
    sfSprite *sprite;
    int difficulty;
}choice_t;

typedef struct lose_s
{
    sfTexture *texture;
    sfSprite *sprite;
}lose_t;

typedef struct win_s
{
    sfTexture *texture;
    sfSprite *sprite;
}win_t;

typedef struct game_s
{
    struct moblist_s *moblist;
    struct texture_s *texture_mob;
    struct wave_s *wave;
    sfVector2f scale_cap;
    sfVector2f pos_cap;
    sfVector2f scale_town;
    sfVector2f pos_town;
    sfVector2f scale_army;
    sfVector2f pos_army;
    sfVector2f scale_life;
    sfVector2f pos_life;
    sfIntRect rec_cap;
    sfIntRect rec_town;
    sfIntRect rec_life;
    sfIntRect rec_army;
    sfSprite *sprite_cap;
    sfTexture *texture_life;
    sfSprite *sprite_life;
    sfTexture *texture_army;
    sfSprite *sprite_army;
    sfTexture *texture_tools;
    sfSprite *sprite_town;
    sfTexture *texture;
    sfSprite *sprite;
}game_t;

typedef struct texture_s
{
    sfTexture *die;
    sfTexture *dca;
    sfTexture *heavy;
    sfTexture *recon;
    sfTexture *light;
}texture_t;

typedef struct mob_s
{
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    sfSprite *sprite;
    sfVector2f coord;
    sfVector2f pos;
    sfVector2f size;
    sfIntRect rect;
    int clear;
    int stop;
    int act;
    int speed;
    int max_life;
    int life;
    int strenght;
    int type;
    struct mob_s *save_next_next;
    struct mob_s *next;
}mob_t;

typedef struct moblist_s
{
    int delete;
    int nbr;
    struct mob_s *first;
}moblist_t;

typedef struct wave_s
{
    int dca;
    int light;
    int heavy;
    int recon;
    int nbr_wave;
    int wave_push;
}wave_t;

typedef struct data_s
{
    sfClock *clock;
    sfSprite *sprite_cursor;
    sfTexture *texture_cursor;
    sfVector2f pos_cursor;
    sfRenderWindow *window;
    sfEvent event;
    double game_speed;
    double time;
    int size_window_x;
    int size_window_y;
    int cry;
    float size_window_x_float;
    float size_window_y_float;
    float resize_x;
    float resize_y;
    sfText *text;
    sfVector2f pos_text;
    sfFont *font;
    sfMusic *soviet;
    struct start_s *start;
    struct choice_s *choice;
    struct game_s *game;
    struct lose_s *lose;
    struct win_s *win;
    int hit;
    sfFloatRect hit_rect;
    char *score;
    float hit_x_min;
    float hit_y_min;
    int cmp;
    int pas;
    int y;
    int x;
    float min_x;
    float min_y;
    int lenght_x;
    int lenght_y;
}data_t;

#endif
