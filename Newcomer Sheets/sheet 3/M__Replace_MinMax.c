#include <stdio.h>

int main ()

{
    unsigned short n;

    scanf ("%hu", &n);

    int ar [n], max, min, i;

    for ( i = 0; i < n; i++)
    {
        scanf ("%d", &ar [i]);
    }

    max = ar [0];

    min = ar [0];

    for ( i = 0; i < n; i++)
    {
        if (max < ar [i])
        {
            max = ar [i];
        }

        if (min > ar [i])
        {
            min = ar [i];
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        if (max == ar [i])
        {
            ar [i] = min;

            continue;
        }

        if (min == ar [i])
        {
            ar [i] = max;

            continue;
        }
    }


    for ( i = 0; i < n; i++)
    {
        printf ("%d ", ar [i]);
    }
    
    printf ("\n");
    
    return 0;
}