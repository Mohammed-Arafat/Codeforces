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
            for ( i = 0, x = 0; i <= n - size; i++, x = 0)
            {
                for ( j = i; j < i + size - 1; j++)
                {
                    if (ar [j] < ar [j + 1])
                    {
                        x++;
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