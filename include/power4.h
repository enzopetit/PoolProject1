/*
** ESGI PROJECT, 2024
** power4
** File description:
** power4
*/

#ifndef POWER4_H_
    #define POWER4_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    #include <math.h>

    typedef struct player_1 {
        bool is_playing;
        char token;
        char *color;
        int x;
        int y;
    } play1_t;

    typedef struct player_2 {
        bool is_playing;
        char token;
        char *color;
        int x;
        int y;
        int color;
    } play2_t;

    typedef struct map {
        int rows;
        int cols;
        int victory_conditions;
        char **map;
    } map_t;


    typedef struct data {
        map_t *m;
        play1_t *p1;
        play2_t *p2;
    } data_t;

#endif /* !POWER4_H_ */
