#include <stdio.h>

#define pi 3.141592653

int main ()

{
    double r, a;

    scanf ("%lf", &r);

    a = pi * (r * r);

    printf ("%.9lf\n", a );

    return 0;
}