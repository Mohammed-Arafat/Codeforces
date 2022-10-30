#include <stdio.h>

int main ()

{
    long long a, b, c, r;

    char s, q;

    scanf ("%lld %c %lld %c %lld", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        r = a + b;

        if (r == c)
        {
            printf ("Yes\n");
        }

        else
        {
            printf ("%lld\n", r);
        }
        
        
    }

     if (s == '-')
    {
        r = a - b;

        if (r == c)
        {
            printf ("Yes\n");
        }

        else
        {
            printf ("%lld\n", r);
        }
        
        
    }

     if (s == '*')
    {
        r = a * b;

        if (r == c)
        {
            printf ("Yes\n");
        }

        else
        {
            printf ("%lld\n", r);
        }
        
        
    }
    




    return 0;
}