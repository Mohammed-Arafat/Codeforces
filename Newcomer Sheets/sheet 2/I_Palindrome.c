#include <stdio.h>

int main ()

{
    unsigned long n, p, d, x;

    scanf ("%lu", &n);

    d = n;

    x = 0;

    while (d > 0)
    {
        p = d % 10;

        d = d / 10;

        x = (x * 10) + p;

    }

    printf ("%lu\n", x);

    if (x == n)
    {
        printf ("YES\n");
    }

    else
    {
        printf ("NO\n");
    }
    
    


    return 0;
}