/*
** EPITECH PROJECT, 2019
** event_type for hunter
** File description:
** event_type.c
*/

#include "my_functions.h"

void event_type1(data_t *data, mob_t *actual)
{
    if (data->hit == 0 && actual->type == 1) {
        data->hit_x_min = data->event.mouseButton.x*data->resize_x;
        data->hit_y_min = data->event.mouseButton.y*data->resize_y;
        data->hit_rect.left = (actual->pos.x*data->resize_x)+20;
        data->hit_rect.top = (actual->pos.y*data->resize_y);
        data->hit_rect.width = ((84*1.2)*data->resize_x)-40;
        data->hit_rect.height = ((52*1.2)*data->resize_y);
    }
}

void event_type2(data_t *data, mob_t *actual)
{
    if (data->hit == 0 && actual->type == 2) {
        data->hit_x_min = data->event.mouseButton.x*data->resize_x;
        data->hit_y_min = data->event.mouseButton.y*data->resize_y;
        data->hit_rect.left = (actual->pos.x*data->resize_x)+20;
        data->hit_rect.top = (actual->pos.y*data->resize_y);
        data->hit_rect.width = ((78*1.2)*data->resize_x)-40;
        data->hit_rect.height = ((57*1.2)*data->resize_y);
    }
}

void event_type3(data_t *data, mob_t *actual)
{
    if (data->hit == 0 && actual->type == 3) {
        data->hit_x_min = data->event.mouseButton.x*data->resize_x;
        data->hit_y_min = data->event.mouseButton.y*data->resize_y;
        data->hit_rect.left = (actual->pos.x*data->resize_x)+33;
        data->hit_rect.top = (actual->pos.y*data->resize_y);
        data->hit_rect.width = ((100*1.2)*data->resize_x)-57;
        data->hit_rect.height = ((58*1.2)*data->resize_y);
    }
}

void event_type4(data_t *data, mob_t *actual)
{
    if (data->hit == 0 && actual->type == 4) {
        data->hit_x_min = data->event.mouseButton.x*data->resize_x;
        data->hit_y_min = data->event.mouseButton.y*data->resize_y;
        data->hit_rect.left = (actual->pos.x*data->resize_x)+25;
        data->hit_rect.top = (actual->pos.y*data->resize_y);
        data->hit_rect.width = ((88*1.2)*data->resize_x)-55;
        data->hit_rect.height = ((51*1.2)*data->resize_y);
    }
}
