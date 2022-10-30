#include <stdio.h>

int main ()

{
    long long i, ar [100], n;

    ar [0] = 0;

    ar [1] = 1;

    for ( i = 0; i < 100; i++)
    {
        ar [i + 2] = ar [i] + ar [i + 1];
    }

    scanf ("%lld", &n);

    printf ("%lld\n", ar [n - 1]);


    return 0;
}