#include <stdio.h>

#include <math.h>

int main ()

{
    long long a, b, c, d, mul, xa, xb, xc, xd, x;

    scanf ("%lld%lld%lld%lld", &a, &b, &c, &d);

    xa = a % 100;

    xb = b % 100;

    xc = c % 100;

    xd = d % 100;



    mul = xa * xb * xc * xd;



    x = mul % 100;

    if (x == 0)
    {
        printf ("00\n");
    }

    else if (x < 10)
    {
        printf ("0%lld\n", x);
    }

    else

    {
        printf ("%lld\n", x);
    }
    
    


     

    return 0;
}