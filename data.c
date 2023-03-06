/*
** EPITECH PROJECT, 2019
** data for hunter
** File description:
** data.c
*/

#include "my_functions.h"

void set_init_data(data_t *new)
{
    sfVector2f pos = {400, 100};

    new->size_window_x_float = sfRenderWindow_getSize(new->window).x;
    new->size_window_y_float = sfRenderWindow_getSize(new->window).y+55;
    new->clock = sfClock_create();
    new->start = init_start();
    new->choice = init_choice();
    new->game = init_game();
    new->lose = init_lose();
    new->win = init_win();
    new->text = sfText_create();
    new->pos_text = pos;
    new->score = malloc(sizeof(char *) *5);
    new->score[0] = '0';
    new->font = sfFont_createFromFile("font/SovietProgram.ttf");
    new->sprite_cursor = sfSprite_create();

}

data_t *init_data(void)
{
    data_t *new = malloc(sizeof(data_t));
    sfVector2f pos_cursor = {0, 0};
    sfFloatRect hit_rect = {0, 0, 0, 0};

    new->time = 0;
    new->window = sfRenderWindow_create((sfVideoMode) {1920, 1080, 30}, \
"Destroy the red Army", sfResize | sfClose, NULL);
    new->game_speed = 2;
    new->size_window_x = sfRenderWindow_getSize(new->window).x;
    new->size_window_y = sfRenderWindow_getSize(new->window).y+55;
    set_init_data(new);
    new->texture_cursor = sfTexture_createFromFile("sprite/cursor.png", NULL);
    new->pos_cursor = pos_cursor;
    new->soviet = sfMusic_createFromFile("music/Hymne National De L URSS.ogg");
    new->cry = 0;
    new->hit_rect = hit_rect;
    new->hit = 0;
    new->cmp = 0;
    new->pas = 0;
    return (new);
}
