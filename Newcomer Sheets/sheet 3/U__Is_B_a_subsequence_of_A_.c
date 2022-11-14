#include <stdio.h>

int main ()

{
    unsigned int i, j, n, m, x = 0, p = 0;

    scanf ("%u%u", &n, &m);

    unsigned int a[n], b[m];

    for ( i = 0; i < n; i++)
    {
        scanf ("%u", &a[i]);
    }

    for ( i = 0; i < m; i++)
    {
        scanf ("%u", &b[i]);
    }

    if (n < m)
    {
        printf ("NO\n");
    }

    else
    {
        for ( i = 0, x = 0; i < m; i++)
        {
            for ( j = p; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    x++;

                    p = j + 1;

                    break;  
                }
        
            }
    
        }

    }

    if (x == m)
    {
        printf ("YES\n");
    }

    else
    {
        printf ("NO\n");
    }

    return 0;
}

