/*
** EPITECH PROJECT, 2019
** my_functions.h
** File description:
** classic header
*/


#ifndef FCT_H
#define FCT_H
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "my_structs.h"

//score.c
void add_score_100_1(data_t *data);
void add_score_100(data_t *data, int x);
void add_score_200_1(data_t *data);
void add_score_200_2(data_t *data);
void add_score_200(data_t *data, int x);

//lose.c
lose_t *init_lose(void);
void event_lose_1(data_t *data);
void event_lose(data_t *data);
void lose(data_t *data);

//win.c
win_t *init_win(void);
void event_win_2(data_t *data);
void event_win(data_t *data);
void win(data_t *data);

//start.c
start_t *init_start();
void event_start_close(data_t *data);
void event_start1(data_t *data);
void event_start(data_t *data);
void start(data_t *data);

//choice.c
choice_t *init_choice(void);
void event_choice_exit(data_t *data);
void event_choice(data_t *data);
void choice(data_t *data);

//choice_diff.c
void event_choice_diff_1(data_t *data);
void event_choice_diff_2(data_t *data);
void event_choice_diff_3(data_t *data);
void event_choice_diff_4(data_t *data);

//texture.c
texture_t *init_texture(void);
void set_texture(data_t *data, int type, mob_t *new);

//wave.c
wave_t *init_wave(void);
void wave_enemy(data_t *data);
moblist_t *init_moblist(void);

//wave_enemy_1.c
void wave_enemy_diff_1_bis(data_t *data, int cmp);
void wave_enemy_diff_1(data_t *data, int cmp);
void wave_enemy_diff_2_bis(data_t *data, int cmp);
void wave_enemy_diff_2(data_t *data, int cmp);

//wave_enemy_2.c
void wave_enemy_diff_3_bis(data_t *data, int cmp);
void wave_enemy_diff_3(data_t *data, int cmp);
void wave_enemy_diff_4_bis(data_t *data, int cmp);
void wave_enemy_diff_4(data_t *data, int cmp);

//game.c
void game_act(data_t *data);
void game(data_t *data);
void init_set_game(game_t *new);
void init_set_game_sprite(game_t *new);
game_t *init_game(void);

//data.c
void set_init_data(data_t *new);
data_t *init_data(void);

//event_type.c
void event_type1(data_t *data, mob_t *actual);
void event_type2(data_t *data, mob_t *actual);
void event_type3(data_t *data, mob_t *actual);
void event_type4(data_t *data, mob_t *actual);

//event_game.c
void event_game_pre(data_t *data);
void event_game_hit(data_t *data, mob_t *actual);
void event_game_2(data_t *data, mob_t *actual);
void event_game_click(data_t *data, mob_t *actual);
void event_game(data_t *data);

//event_game_diff.c
void game_blue(data_t *data);
void game_green(data_t *data);
void game_yellow(data_t *data);
void game_black(data_t *data);

//set.c
void set_game2(data_t *data);
void set_game(data_t *data);
int set_speed(int type);
void set_add(data_t *data, int type, mob_t *new);
sfIntRect set_rect(int type);

//mob_step.c
void mob_move1(mob_t *actual);
void mob_move2(mob_t *actual);
void mob_beacon(mob_t *actual);
void mob_stop1(mob_t *actual);
void mob_stop2(mob_t *actual);

//mob_hit1.c
void mob_stop_hit1(data_t *data);
void mob_hit1(data_t *data, mob_t *actual);
void mob_stop_hit2(data_t *data);
void mob_hit2(data_t *data, mob_t *actual);

//mob_hit2.c
void mob_stop_hit3(data_t *data);
void mob_hit3(data_t *data, mob_t *actual);
void mob_stop_hit4(data_t *data);
void mob_hit4(data_t *data, mob_t *actual);

//hit.c
void hit(data_t *data, mob_t *actual);
void pre_explode(data_t *data, mob_t *actual, sfIntRect die);
void explode(mob_t *actual);

//add.c
void add(data_t *data, int type, int x, int y);
void draw_mob(data_t *data);
void acting_mob(data_t *data, mob_t *actual);
void update_mob(data_t *data);

//tools.c
int hitbox(data_t *data);
sfVector2f random_pos(int x, int y);
sfVector2f change_coord(data_t *data, sfVector2f coord);
void add_score(data_t *data, int x);

#endif
