/*
** EPITECH PROJECT, 2019
** game for hunter
** File description:
** game.c
*/

#include "my_functions.h"

void game_act(data_t *data)
{
    data->time = sfTime_asSeconds(sfClock_getElapsedTime(data->clock));
    sfRenderWindow_drawSprite(data->window, data->game->sprite, NULL);
    sfRenderWindow_drawSprite(data->window, data->game->sprite_cap, NULL);
    sfRenderWindow_drawSprite(data->window, data->game->sprite_army, NULL);
    sfRenderWindow_drawSprite(data->window, data->game->sprite_town, NULL);
    sfRenderWindow_drawSprite(data->window, data->game->sprite_life, NULL);
    sfRenderWindow_drawText(data->window, data->text, NULL);
    wave_enemy(data);
    draw_mob(data);
    update_mob(data);
    sfRenderWindow_drawSprite(data->window, data->sprite_cursor, NULL);
    sfRenderWindow_display(data->window);
    event_game(data);
}

void game(data_t *data)
{
    data->resize_x = sfRenderWindow_getSize(data->window).x/da\
ta->size_window_x_float;
    data->resize_y = sfRenderWindow_getSize(data->window).y/da\
ta->size_window_y_float;
    game_blue(data);
    game_green(data);
    game_yellow(data);
    game_black(data);
    sfText_setPosition(data->text, data->pos_text);
    sfText_setString(data->text, data->score);
    sfText_setStyle(data->text, sfTextRegular);
    sfText_setCharacterSize(data->text, 30);
    sfText_setFont(data->text, data->font);
    sfRenderWindow_setMouseCursorVisible(data->window, 0);
    set_game(data);
    srand(time(NULL));
    while (sfRenderWindow_isOpen(data->window)) {
        game_act(data);
    }
}

void init_set_game(game_t *new)
{
    sfIntRect rec_cap = {0, 0, 0, 0};
    sfIntRect rec_town = {0, 0, 0, 0};
    sfIntRect rec_life = {0, 0, 0, 0};
    sfIntRect rec_army = {0, 0, 0, 0};

    new->sprite_town = sfSprite_create();
    new->sprite_cap = sfSprite_create();
    new->rec_cap = rec_cap;
    new->rec_town = rec_town;
    new->rec_life = rec_life;
    new->rec_army = rec_army;
}

void init_set_game_sprite(game_t *new)
{
    new->texture_mob = init_texture();
    new->moblist = init_moblist();
    new->wave = init_wave();
    new->texture = sfTexture_createFromFile("sprite/game.png", NULL);
    new->sprite = sfSprite_create();
    new->texture_life = sfTexture_createFromFile("sprite/life.png", NULL);
    new->sprite_life = sfSprite_create();
    new->texture_army = sfTexture_createFromFile("sprite/cap.gif", NULL);
    new->sprite_army = sfSprite_create();
    new->texture_tools = sfTexture_createFromFile("sprite/tools.png", NULL);
    new->moblist = init_moblist();

}

game_t *init_game(void)
{
    game_t *new = malloc(sizeof(game_t));
    sfVector2f scale_cap = {2.345, 2.345};
    sfVector2f pos_cap = {5, 92};
    sfVector2f scale_town = {2.2, 2.2};
    sfVector2f pos_town = {5, 400};
    sfVector2f scale_army = {1.75, 2};
    sfVector2f pos_army = {123, 93};
    sfVector2f scale_life = {2.725, 1.8};
    sfVector2f pos_life = {4, 5};

    init_set_game(new);
    init_set_game_sprite(new);
    new->scale_cap = scale_cap;
    new->pos_cap = pos_cap;
    new->scale_town = scale_town;
    new->pos_town = pos_town;
    new->scale_army = scale_army;
    new->pos_army = pos_army;
    new->scale_life = scale_life;
    new->pos_life = pos_life;
    return (new);
}
