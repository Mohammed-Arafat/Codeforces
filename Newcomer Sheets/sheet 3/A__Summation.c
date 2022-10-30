#include <stdio.h>

#include <stdlib.h>

int main ()

{
    long long i, n, s;

    scanf ("%lld", &n);

    long long element [n];

    s = 0;

    for ( i = 0; i < n; i++)
    {
        scanf ("%lld", &element [i]);

        s += element [i];
    }

    s = abs (s);

    printf ("%lld\n", s);
    

    return 0;
}