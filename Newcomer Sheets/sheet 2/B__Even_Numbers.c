#include <stdio.h>

int main()

{
    int i, a;

    scanf("%d", &a );

    for ( i = 1; i <= a; i++)
    {
        if (a == 1)
        {
            printf("-1\n");
        }

        else if (i % 2 == 0)
        {
            printf("%d\n", i );
        }
        
    }

    return 0;
}