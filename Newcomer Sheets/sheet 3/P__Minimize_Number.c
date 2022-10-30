#include <stdio.h>

int main ()

{
    unsigned int i, n;

    int x, count = 0;

    scanf ("%u", &n);

    unsigned int ar [n + 1];

    AGAIN:

    for ( i = 1, x = 0; i <= n; i++)
    {
        scanf ("%u", &ar [i]);

        if (ar [i] % 2 == 0)
        {
            ar [i] = ar [i] / 2;

            x++;
        }

    }

    if (x == n)
    {
        count++;

        goto AGAIN;
    }

    else
    {
        printf ("%d\n", count);
    }






    return 0;
}
