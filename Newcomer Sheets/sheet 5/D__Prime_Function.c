#include <stdio.h>

unsigned long prime_checker (unsigned long x)

{
    unsigned int i, f;

    f = 0;

    for ( i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            f = 1;
        }
        
    }

    if (f == 0)
    {
        return x;
    }

    else
    {
        return x = 0;
    }
    
    
    
}


int main ()

{
    unsigned long i, n, a, p;

    scanf ("%lu", &n);

    for (i = 1; i <= n; i++)

    {
        scanf ("%lu", &a);

        p = prime_checker (a);

        if (p == a)
        {
            printf ("YES\n");
        }

        else
        {
            printf ("NO\n");
        }

    }
    
    


}