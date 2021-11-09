/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float *abs_vector(float x, float y, float z)
{
    float *abs = malloc(sizeof(float) * 3);
     if (abs == NULL) {
        return NULL;
    } else {
         abs[0] = x;
         abs[1] = y;
         abs[2] = z;
     }
     return (abs);
}

float *sum_vector(float *V1, float *V2)
{
    float *sum = malloc(sizeof(float) * 3);
     if (sum == NULL) {
        return NULL;
    } else {
         sum[0] = V1[0] + V2[0];
         sum[1] = V1[1] + V2[1];
         sum[2] = V1[2] + V2[2];
     }
     return (sum);
}

float *coef_vector(float *V, float m)
{
    float *coefx = malloc(sizeof(float) * 3);

    if (coefx == NULL) {
        return NULL;
    } else {
        coefx[0] = m * V[0];
        coefx[1] = m * V[1];
        coefx[2] = m * V[2];
    }
    return (coefx);
}


float *norm_vector(float * V)
{
    float *norm = malloc(sizeof(float) * 3);

    if (norm == NULL) {
        return NULL;
    } else {
        norm = sqrt(pow(V[0], 2) + pow(V[1], 2) + pow(V[2], 2));
    }
    return (norm);
}
/*
int main(void)
{
    float *disp = abs_vector(2, 4, 6);
    printf("x = %.3f\n", disp[0]);
    printf("y = %.3f\n", disp[1]);
    printf("z = %.3f\n", disp[2]);
    return (0);
}


int main(int ac, char **av)
{
    float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));
    printf("%.2f\n%.2f\n%.2f\n", V[0], V[1], V[2]);
    return (0);
}

int main (int ac, char **av)
{
    float * V1 = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));
    float * V2 = abs_vector(atof(av[4]), atof(av[5]), atof(av[6]));
    float *V = sum_vector(V1, V2);
    printf("%.2f\n%.2f\n%.2f\n", V[0], V[1], V[2]); 
    return (0);
}


int main (int ac, char **av)
{
    float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));
    float * m = abs_vector(atof(av[0]));
    float *Vx = coef_vector(V, m);
    printf("%.2f\n%.2f\n%.2f\n", V[0], V[1], V[2]);
    return (0);
}
*/

int main (int ac, char **av)
{
    float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3])); 
    float k = norm_vector(V);
    printf("%.2f\n", k);
    return (0);
}
