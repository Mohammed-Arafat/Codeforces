#include <stdio.h>

int main ()

{
    freopen ("input.txt", "r", stdin);

    freopen ("output.txt", "w", stdout);

    int i, j, m, n;

    scanf("%d%d", &m, &n);

    for (i = 1; i <= m; i++)

    {
        for ( j = 1; j <= n; j++)
        {
            printf ("*");
        }

        printf ("\n");
        

    }

    



    return 0;
}