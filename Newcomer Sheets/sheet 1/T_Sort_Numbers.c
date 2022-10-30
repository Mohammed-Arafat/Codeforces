#include <stdio.h>

int main ()

{
    long a, b, c, x1, x2, x3;

    scanf ("%ld%ld%ld", &a, &b, &c );

    if (a < b && a < c)
    {
        x1 = a;
    }

    else if (b < a && b < c)
    {
        x1 = b;
    }

    else if (c < a && c < b)
    {
        x1 = c;
    }
    



    if ((a < b && a > c) || (a > b && a < c))
    {
        x2 = a;
    }

    else if ((b < a && b > c) || (b > a && b < c))
    {
        x2 = b;
    }

    else if ((c < a && c > b) || (c > a && c < b))
    {
        x2 = c;
    }





    if (a > b && a > c)
    {
        x3 = a;
    }

    else if (b > a && b > c)
    {
        x3 = b;
    }

    else if (c > a && c > b)
    {
        x3 = c;
    }







    if (a == b)
    {
        if (a < c)
        {
            x1 = a;

            x2 = b;

            x3 = c;
        }

        else 

        {
            x1 = c;

            x2 = b;

            x3 = a;
        }
        
    }

    else if (b == c)
    {
        if (b < a)
        {
            x1 = b;

            x2 = c;

            x3 = a;
        }

        else

        {
            x1 = a;

            x2 = c;

            x3 = b;
        }
        
    }

    else if (c == a)
    {
        if (c < b)
        {
            x1 = c;

            x2 = a;

            x3 = b;
        }

        else

        {
            x1 = b;

            x2 = a;

            x3 = c;
        }
    }
    
    
    












    printf ("%ld\n%ld\n%ld\n\n", x1, x2, x3);

    printf ("%ld\n%ld\n%ld\n", a, b, c );






    return 0;
}