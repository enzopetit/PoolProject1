/*
** ESGI PROJECT, 2024
** map_generator
** File description:
** map_generator
*/

#include "power4.h"

void map_generator(data_t *d)
{
    int map_length = rows;
    map = malloc(sizeof(char *) * (map_length) + 1);

    if (!map) {
        printf("Error: malloc error for the map\n");
        exit(84);
    }
    return;
}

