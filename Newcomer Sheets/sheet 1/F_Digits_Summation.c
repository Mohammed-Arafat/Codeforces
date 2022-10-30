#include <stdio.h>

int main ()

{
    long long n, m, xn, xm, sum;

    scanf ("%lld%lld", &n, &m );

    xn = n % 10;

    xm = m % 10;

    sum = xn + xm;

    printf ("%lld\n", sum );

    return 0;
}