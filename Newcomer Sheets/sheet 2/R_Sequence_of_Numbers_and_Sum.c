#include <stdio.h>

int main ()
{
    int i, a, b, s;

    while (1)
    {
        scanf ("%d%d", &a, &b);

        s = 0;

        if (a <= 0 || b <= 0)
        {
            break;
        }
        else if (a > b)
        {
            for ( i = b; i <= a; i++)
            {
                s += i;

                printf ("%d ", i);

            }

            printf ("sum =%d\n", s);
            
        }
        else if (b > a)
        {
            for ( i = a; i <= b; i++)
            {
                s += i;

                printf ("%d ", i);

            }

            printf ("sum =%d\n", s);
        }
        else if (a == b)
        {
            printf ("%d sum =%d\n", a, b);
        }

    } 

    return 0;
}