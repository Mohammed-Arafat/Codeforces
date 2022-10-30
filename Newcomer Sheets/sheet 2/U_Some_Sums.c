#include <stdio.h>

int main ()

{
    int i, i1, i2, n, a, b, s, sp, p, d;

    scanf ("%d%d%d", &n, &a, &b);

    s = 0;

    for ( i = 1; i <= n; i++)
    {
        if (i < 10)
        {
            if (i >= a && i <= b)
            {
                s += i;
            }
              
        }

        else
        {
            d = i;

            sp = 0;

            while (d > 0)
            {
                p = d % 10;

                d = d / 10;

                sp += p;
            
            }

            if (sp >= a && sp <= b)
            {
                s += i;
            }
            

        }
        
        
    }

    printf ("%d\n", s);
    



    return 0;
}