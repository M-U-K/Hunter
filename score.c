/*
** EPITECH PROJECT, 2019
** score.c
** File description:
** score for my_hunter
*/

#include "my_functions.h"

void add_score_100_1(data_t *data)
{
    if (data->score[0] == '9'){
        data->score[1] = '0';
        data->score[3] = '0';
        data->score[0] = '1';
        data->pas++;
        data->cmp++;
    }
    if (data->pas == 0)
        data->score[data->cmp]++;
    data->pas = 0;
    if (data->score[0] == '8' && data->score[1] == '0' \
&& data->score[2] == '0' && data->score[3] == '0')
        win(data);
}

void add_score_100(data_t *data, int x)
{
    if (x == 100){
        if (data->score[0] == '0') {
            data->score[0] = '0';
            data->score[1] = '0';
            data->score[2] = '0';
        }

        if (data->score[data->cmp] == '9' && data->cmp != 0) {
            data->score[0]++;
            data->score[3] = '0';
            data->score[1] = '0';
            data->pas++;
        }
        add_score_100_1(data);
    }
}

void add_score_200_1(data_t *data)
{
    if (data->score[0] == '7' && \
data->score[1] == '9' && data->score[2] == '0' && data->score[3] == '0') {
        win(data);
    }
    if (data->score[0] == '7' && \
data->score[1] == '8' && data->score[2] == '0' && data->score[3] == '0') {
        win(data);
    }
    if (data->score[0] == '0') {
        data->score[0] = '0';
        data->score[1] = '0';
        data->score[2] = '0';
    }
    if (data->score[data->cmp] == '9' && data->cmp != 0) {
        data->score[0]++;
        data->score[3] = '0';
        data->score[1] = '1';
        data->pas++;
    }
}

void add_score_200_2(data_t *data)
{
    if (data->score[0] == '9'){
        data->score[1] = '1';
        data->score[3] = '0';
        data->score[0] = '1';
        data->pas++;
        data->cmp++;
    }
    if (data->score[0] == '8'){
        data->score[1] = '0';
        data->score[3] = '0';
        data->score[0] = '1';
        data->pas++;
        data->cmp++;
    }
    if (data->pas == 0)
        data->score[data->cmp] += 2;
    data->pas = 0;
}

void add_score_200(data_t *data, int x)
{
    if (x == 200){
        add_score_200_1(data);
        if (data->score[data->cmp] == '8' && data->cmp != 0) {
            data->score[0]++;
            data->score[3] = '0';
            data->score[1] = '0';
            data->pas++;
        }
        add_score_200_2(data);
    }
}
