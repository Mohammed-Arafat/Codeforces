#include <stdio.h>

int main ()

{
  
    long long a, b, c, min, max;

    scanf ("%lld%lld%lld", &a, &b, &c);

    if (a < b && a < c)
    {
        min = a;
    }

    else if (b < a && b < c)
    {
        min = b;
    }

    else if (c < a && c < b)
    {
        min = c;
    }



    if (a > b && a > c)
    {
        max = a;
    }

    else if (b > a && b > c)
    {
        max = b;
    }

    else if (c > a && c > b)
    {
        max = c;
    }

    if (a == b)
    {
        if (a > c)
        {
            max = a;

            min = c;
        }

        else 

        {
            max = c;

            min = a;
        }
        
    }

    if (b == c)
    {
        if (a > b)
        {
            max = a;

            min = b;
        }

        else 

        {
            max = b;

            min = a;
        }
        
    }

    if (c == a)
    {
        if (b > c)
        {
            max = b;

            min = c;
        }

        else 

        {
            max = c;

            min = b;
        }
        
    }
    
    
    printf ("%lld %lld\n", min, max);


    return 0;
}