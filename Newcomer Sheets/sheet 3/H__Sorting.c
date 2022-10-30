#include <stdio.h>

int main ()

{
    int i, j, x, n;

    scanf ("%d", &n);

    int ar [n];

    for ( i = 0; i < n; i++)
    {
        scanf ("%d", &ar [i]);
    }

    for (i = 0; i < n; i++)

    {
        for ( j = i + 1; j < n; j++)
        {
            if (ar [i] > ar [j])
            {
                x = ar [i];

                ar [i] = ar [j];

                ar [j] = x;
            }
            
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        printf ("%d ", ar [i]);
    }

    printf ("\n");
    
    
    return 0;
}