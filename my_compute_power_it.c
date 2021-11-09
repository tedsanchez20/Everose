/*
** EPITECH PROJECT, 2021
** my_compute_power_it.c
** File description:
** 
*/

#include <stdio.h>

int my_compute_power_it(int nb, int p)

{
    int puissance = 1;
    int i = 1;
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    while (i <= p) {
        puissance *= nb;
        i++;
    }
    return (puissance);
}

int main()
{
    int k = my_compute_power_it(5,3);
    printf("%d\n", k);
    return (0);
}
