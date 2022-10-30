#include <stdio.h>

int main ()

{
    long long l1, r1, l2, r2, x, y;

    scanf ("%lld%lld%lld%lld", &l1, &r1, &l2, &r2 );

    if ((l2 >= l1) && (r1 <= r2))
    {
        x = l2;

        y = r1;

        if (x <= y)
        {
            printf ("%lld %lld\n", x, y);
        }

        else
        {
            printf ("-1\n");
        }
        
        
    }
    





    else if ((l1 >= l2) && (r2 <= r1))
    {
        x = l1;

        y = r2;

        if (x <= y)
        {
            printf ("%lld %lld\n", x, y);
        }

        else
        {
            printf ("-1\n");
        }
        
        
    }






    else if ((l1 >= l2) && (r1 <= r2))
    {
        x = l1;

        y = r1;

        if (x <= y)
        {
            printf ("%lld %lld\n", x, y);
        }

        else
        {
            printf ("-1\n");
        }
        
        
    }





    else if ((l2 >= l1) && (r2 <= r1))
    {
        x = l2;

        y = r2;

        if (x <= y)
        {
            printf ("%lld %lld\n", x, y);
        }

        else
        {
            printf ("-1\n");
        }
        
        
    }
    


    return 0;
}