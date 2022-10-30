#include <stdio.h>

int main ()

{
    short n, m, i, j;

    scanf ("%hd%hd", &n, &m);

    unsigned long long ar [n] [m];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf ("%llu", &ar [i] [j]);
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = m - 1; j >= 0; j--)
        {
            printf ("%llu ", ar [i] [j]);
        }

        printf ("\n");
        
    }
    
    return 0;
}