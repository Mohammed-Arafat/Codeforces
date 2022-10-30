#include <stdio.h>

int main ()

{
    unsigned int n, i, sum;

    scanf ("%u", &n);

    short ar [n];

    sum = 0;

    for ( i = 0; i < n; i++)
    {
        scanf ("%1hd", &ar[i]);

        sum += ar[i];
    }

    printf ("%u\n", sum);
    



    return 0;
}