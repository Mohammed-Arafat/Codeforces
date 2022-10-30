#include <stdio.h>

int main ()
{
    int i, j, x, y, s, n;

    scanf ("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        scanf ("%d%d", &x, &y);

        s = 0;

        if (x > y)
        {
            for ( j = y + 1; j < x; j++)
            {
                if (j % 2 != 0)
                {
                    s += j;
                }
                
            }

            printf ("%d\n", s);
            
        }

        else if (y > x)
        {
            for ( j = x + 1; j < y; j++)
            {
                if (j % 2 != 0)
                {
                    s += j;
                }
                
            }

            printf ("%d\n", s);
        }

        else if (x == y)
        {
            
            printf ("0\n"); 
            
        }

        
        
        
        
    }
    
    
    return 0;
}