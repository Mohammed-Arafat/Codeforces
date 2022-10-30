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

    scanf ("%lld", &a);

    f = -1;

    for ( j = 0; j < n; j++)
    {
        if (a == element [j])
        {
           f = j;

           break; 
        }
        
    }

    if (f == -1)
    {
        printf ("%lld\n", f);
    }

    else
    {
        printf ("%lld\n", f);
    }
    

    return 0;
}