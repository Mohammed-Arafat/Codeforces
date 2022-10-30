#include <stdio.h>

long summation_two_number (long x , long y)

{
    return (x + y);
}

int main ()

{
    long a, b, sum;

    scanf ("%ld%ld", &a, &b);

    sum = summation_two_number (a , b);

    printf ("%ld\n", sum);


    return 0;
}