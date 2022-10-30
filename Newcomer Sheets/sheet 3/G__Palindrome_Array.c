#include <stdio.h>

int main ()

{
    unsigned int i, j, n;

    int x;

    scanf ("%u", &n);

    unsigned int ar [n + 1];

    for ( i = 1; i <= n; i++)
    {
        scanf ("%u", &ar [i]);
    }

    x = 0;

    for ( j = n, i = 1; j >= 1 && i <= n; j--, i++)
    {
        if (ar [j] == ar [i])
        {
            x++;
        }
        
    }
    
    if (x == n)
    {
        printf ("YES\n");
    }
    
    else
    {
        printf ("NO\n");
    }
    

    return 0;
}