#include <stdio.h>

int main ()

{
    int i, j, p, n;

    scanf ("%d", &n);

    

    long long ar [n + 1], low;

    for ( i = 1; i <= n; i++)
    {
        scanf ("%lld", &ar[i]);
    }
    
    low = ar [1];

    p = 1;

    for ( j = 1; j <= n; j++)
    {
        if (low > ar[j])
        {
            low = ar[j];

            p = j;
        }
        
    }
    

    printf ("%lld %d\n", low, p);

    return 0;
}