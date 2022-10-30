#include <stdio.h>

int main ()

{
    int i, j, n, m, x, f;

    scanf ("%d%d", &n, &m);

    int ar [n] [m];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf ("%d", &ar [i] [j]);
        }
        
    }

    f = 0;

    scanf ("%d", &x);
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (x == ar [i] [j])
            {
                f = 1;
            }
            
        }
        
    }
    

    if (f == 1)
    {
        printf ("will not take number\n");
    }

    else
    {
        printf ("will take number\n");
    }
    
    

    return 0;
}