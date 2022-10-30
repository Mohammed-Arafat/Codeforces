#include <stdio.h>

#include <stdlib.h>

int main ()

{
    int n, i, j, sp, ss, diff;

    scanf ("%d", &n);

    int ar [n] [n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf ("%d", &ar [i] [j]);
        }
        
    }

    sp = 0;

    ss = 0;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i == j)
            {
                sp += ar [i] [j];
            }
            
        }
        
    }

    for ( i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        ss += ar [i] [j];
    }

    diff = abs (sp - ss);

    printf ("%d\n", diff);
    
    return 0;
}