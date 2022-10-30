#include <stdio.h>

#include <math.h>

int main ()

{
    int i, x, n, p, bin, deci;

    scanf ("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        scanf ("%d", &x);

        bin = 0;

        while (x > 0)
        {
            p = x % 2;

            if (p == 1)
            {
                bin++;
            }

            x /= 2;
            
        }
        
        deci = pow (2 , bin) - 1;

        printf ("%d\n", deci);

    }
    


    
    return 0;
}