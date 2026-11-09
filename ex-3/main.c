#include <stdlib.h>
#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3)
{
    printf("%f", (nb1 + nb2 + nb3)/3);
}

int main()
{
    compute_average(10 , 14, 17);
}