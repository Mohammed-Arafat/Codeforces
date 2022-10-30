#include <stdio.h>

#include <math.h>

int main ()

{
    float a, b, f, c, r;

    scanf ("%f%f", &a, &b);

    f = floor (a / b);

    c = ceil (a / b);

    r = round (a / b);

    printf ("floor %.0f / %.0f = %.0f\n", a, b, f );

    printf ("ceil %.0f / %.0f = %.0f\n", a, b, c );

    printf ("round %.0f / %.0f = %.0f\n", a, b, r );




    return 0;
}