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

float norm_vector(float * V)
{
    float norm = 0;

    norm = sqrt(pow(V[0], 2) + pow(V[1], 2) + pow(V[2], 2));
    return (norm);
}


//declarer un vecteur V
float * cord_vector(float x1, float y1, float z1, float x2, float y2, float z2, float n)
{
//    while ( n != 0) {
    float xt, yt, zt;
    float x, y, z;
    float *V;
    V  = malloc(sizeof(float) * 2);

    xt = x2 - x1;
    yt = y2 - y1;
    zt = z2 - z1; // il fallait trouver la loi horraire du vecteur, dont la formule est x = vt + x0.Je vais expliquer le reste quand ce sera plus clair pour moi egalement
    x = x2 + (xt * n);
    y = y2 + (yt * n);
    z = z2 + (zt * n);

    V[0] = x;
    V[1] = y;
    V[2] = z;
/*      xt = xt + x;
        yt = yt + y;
        zt = zt + z;
        n--; 
        } */
    // V[2] = 4;
    // printf("%f\n", V[2]);
    return (V);
}


float check_paddle_reach(float z0, float z1)
{
    if (z1 == z0) {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    if ((z1 > 0 && z0 > 0 && z0 < z1) || (z1 < 0 && z0 < 0 && z0 > z1 )) {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    if ((z0 > 0 && z1 < 0) || (z0 < 0 && z1 > 0)) {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    return (1);
}


float incid_vector(float * V)
{
    float incidx;

    incidx = asinf(V[2] / norm_vector(V)) * (180 / M_PI);

    return (incidx);  // le z a utiliser est le meme que celui des coordonnees de l'exo avant dernier.
}


int main (int ac, char **av)
{
    float  V[3];
    V[0] = atof(av[1]);
    V[1] = atof(av[2]);
    V[2] = atof(av[3]);
    float l = incid_vector(V);
    printf("%.2f\n", l);
}
