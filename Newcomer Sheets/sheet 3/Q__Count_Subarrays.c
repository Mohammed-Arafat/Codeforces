#include <stdio.h>

int main ()

{
    int tastcase, t, i, j, size, n, x, count;

    scanf ("%d", &tastcase);

    for ( t = 1, x = 0, count = 0; t <= tastcase; t++, x = 0, count = 0)
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
                for ( j = i; j < i + size; j++)
                {
                    if (j <= i + size - 2)
                    {
                        if (ar [j] < ar [j + 1])
                        {
                            x++;
                        }
                        
                    }
                    
                }

                if (x == size - 1)
                {
                    count++;
                }
                
                
            }
            
        }

        printf ("%d\n", count);
        
    }
    

    return 0;
}