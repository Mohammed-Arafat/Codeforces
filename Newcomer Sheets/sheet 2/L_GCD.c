#include <stdio.h>

int main ()

{
    int a, b, f, da, db, d, dpre, r, i; 

    scanf ("%d%d", &a,&b);

    d = 0;

    for ( i = 1; i <= a && i <= b; i++)
    {
        f = 0;

        da = a % i;

        db = b % i;

        dpre = d;

        if (da == 0 && db == 0)
        {
            d = i;
        }

        if (d > dpre)
        {
            r = d;
        }

        
    }

    printf ("%d\n", r);
    

   
    

    return 0;
}