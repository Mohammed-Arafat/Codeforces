#include <stdio.h>

int main ()

{
    char s;

    int i, j, n, x;

    scanf ("%c %d", &s, &n);

    for ( i = 1; i <= n; i++)
    {
        scanf ("%d", &x);

        for ( j = 1; j <= x; j++)
        {
            printf ("%c", s);
        }

        printf ("\n");
        


    }
    


    return 0;
}