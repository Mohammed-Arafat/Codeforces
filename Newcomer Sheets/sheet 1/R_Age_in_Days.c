#include <stdio.h>

int main ()

{
    unsigned int y, m, d, n, x;

    scanf ("%u", &n );

    y = n / 365;

    x = n - (y * 365);

    m = x / 30;

    x = x - (m * 30);

    d = x;

    printf ("%u years\n", y );

    printf ("%u months\n", m );

    printf ("%u days\n", d );



    return 0;
}