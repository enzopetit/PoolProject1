/*
** ESGI PROJECT, 2024
** Main
** File description:
** main
*/

#include "power4.h"

static data_t *init_data(void)
{
    data_t *d = malloc(sizeof(data_t));
    d->m = malloc(sizeof(map_t));
    d->p1 = malloc(sizeof(play1_t));
    d->p2 = malloc(sizeof(play2_t));
    return d;
}

int main(void)
{
    data_t *d = init_data();

    if (!d) {
        printf("Error: data memory allocation error\n");
        return 84;
    }
    map_generator(d);
    return 0;
}
