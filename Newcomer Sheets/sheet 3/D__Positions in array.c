#include <stdio.h>

int main ()

{
    long long i, j, n, a, f;

    scanf ("%lld", &n);

    long long element [n];

    for ( i = 0; i < n; i++)
    {
        scanf ("%lld", &element [i]);   
    }

    for ( j = 0; j < n; j++)
    {
        if (element [j] <= 10)
        {
            printf ("A[%lld] = %lld\n", j, element [j]);
        }
        
    }
    

    return 0;
}