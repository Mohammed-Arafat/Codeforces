#include <stdio.h>

#include <limits.h>

int main ()

{
    long long i, j, k, n1, n, x1, x2, s;

    scanf ("%lld", &n1);


    for (k = 1; k <= n1; k++)

    {

        scanf ("%lld", &n);

        long long ar [n];

        for ( i = 0; i < n; i++)
        {
            scanf ("%lld", &ar [i]);
        }

        x2 = LONG_LONG_MAX;

        for ( i = 0; i < n; i++)
        {
            for ( j = i + 1; j < n; j++)
            {
                x1 = ar [i] + ar [j] + j - i;

                if (x1 < x2)
                {
                    s = x1;

                    x2 = x1;
                }
                
            }
            
        }

        printf ("%lld\n", s);

    }
    
    


    return 0;
}