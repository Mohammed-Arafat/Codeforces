#include <stdio.h>

int main ()

{
    long long x, y, m, sum, sub;

    

    scanf ("%lld%lld", &x, &y );

    sum = x + y;

    m = x * y;

    sub = x - y;

    printf ("%lld + %lld = %lld\n", x, y, sum );

    printf ("%lld * %lld = %lld\n", x, y, m );

    printf ("%lld - %lld = %lld\n", x, y, sub );



    return 0;
}