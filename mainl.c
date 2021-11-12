/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

int main(int ac, char **av)
{
    int	x0, y0, z0, x1, y1, z1, n;
    char *p = "-h";

    if (my_strcmp(av[1], p) == 0)
        usage();
    if (ac < 8) {
        my_putstr("Usage: ");
    } else if (ac > 8)
        my_putstr("This program uses just the first 8 arguments provided.\n");
    if (ac >= 8) {
        // il faut une fonction qui puisse lire si ce qui est entrer en parametre est un nombre ou pas
        float k  = cord_vector(atof(av[1]), atof(av[2]), atof(av[3]), atof(av[4]), atof(av[5]), atof(av6[]),atof(av[7]));
        if (n <= 0)
            my_putstr("The argument n must be strictly positive.\n");
        else if (n > 0)
            _vector(x0, y0, z0, x1, y1, z1, n);
    }
    return (0);
}
