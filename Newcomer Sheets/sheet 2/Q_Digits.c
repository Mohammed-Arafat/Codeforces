#include <stdio.h>

int main ()

{
    long long i, n, x, d, p;

    scanf ("%lld", &n);

    for ( i = 1; i <= n; i++)
    {
        scanf ("%lld", &x);

        d = x;

        if (d == 0)
        {
            printf ("0\n");
        }

        else

        {
        

            while (d > 0)
            {
                p = d % 10;

                d = d /10;

                printf ("%d ", p);
            }

            printf ("\n");

        }
        
        
        
    }

    
    
    

    return 0;
}