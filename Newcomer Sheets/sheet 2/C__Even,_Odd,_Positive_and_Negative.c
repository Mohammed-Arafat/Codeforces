#include <stdio.h>

int main()

{
    int i, s , a, e, o, p, n;

    scanf("%d", &a );

    for ( i = 0, e = 0, o = 0, p = 0, n = 0 ; i < a; i++)
    {
        scanf("%d", &s );

        if (s % 2 == 0)
        {
            e++;
        }

        if (s % 2 != 0)
        {
            o++;
        }

        if (s > 0 )
        {
            p++;
        }

        if (s < 0)
        {
            n++;
        }


    }

    printf("Even: %d\n", e );
    printf("Odd: %d\n", o );
    printf("Positive: %d\n", p );
    printf("Negative: %d\n", n );


    return 0;
}
