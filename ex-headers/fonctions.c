#include <stdlib.h>
#include <stdio.h>

int add(int nb1, int nb2)
{
    printf("%d", nb1 + nb2);
}

int print_str(char *str)
{
    printf("%s", str);
    return(0);
}

double compute_average(double nb1, double nb2, double nb3)
{
    printf("%f", (nb1 + nb2 + nb3)/3);
}