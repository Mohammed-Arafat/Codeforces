#include <stdio.h>

int main ()

{
    double x, x1, s;

    scanf ("%lf", &x);

    x1 = (int) x;

    s = x - x1;

    if (s == 0)
    {
        printf ("int %.0lf\n", x1);
    }

    else

    {
        printf ("float %.0lf %.3lf\n", x1, s);
    }
    



    return 0;
}