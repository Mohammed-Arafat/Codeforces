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
        if (element [j] > 0)
        {
            printf ("1 ");
        }

        else if (element [j] < 0)
        {
            printf ("2 ");
        }

        else
        {
            printf ("0 ");
        }
        
    }
    
    printf ("\n");

    return 0;
}