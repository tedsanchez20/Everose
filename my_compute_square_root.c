/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** 
*/

#include <stdio.h>

float my_compute_square_root(float nb)
{
    float k = 0;
    if (nb == 0 || nb < 0) {
        return 0;
    }
    while ((k * k) < nb) {
        k = k + 1;
        if ((k * k) == nb)
            return (k);
    }
    return (k);
}

int main()
{
    float k = my_compute_square_root(8);
    printf("%.2f\n", k);
    return (0);
}

/*
int my_compute_square_root(int nb)
{
    int k = 0;
    if (nb == 0 || nb < 0) {
        return 0;
    }
    while ((k * k) < nb) {
        k = k + 1;
        if ((k * k) == nb)
        return (k);
    }
    return (84);
}

int main()
{
    int k = my_compute_square_root(3);
    printf("%d\n", k);
    return (0);
}


 */
