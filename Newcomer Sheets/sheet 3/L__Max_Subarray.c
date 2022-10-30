#include <stdio.h>

int main ()

{
    int t, tastcase, i, p, max, size, n;

    scanf ("%d", &tastcase);

    for ( t = 1; t <= tastcase; t++)
    {
        scanf ("%d", &n);

        int ar [n];

        for ( i = 0; i < n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        for ( size = 1; size <= n; size++)
        {
            for ( i = 0; i <= n - size; i++)
            {
                max = ar [i];

                for ( p = i; p < size + i; p++)
                {
                    if (max < ar [p])
                    {
                        max = ar [p];
                    }
                    
                }
                
                printf ("%d ", max);
            }
            
        }
        
        printf ("\n");
        
        
    }
    



    return 0;
}