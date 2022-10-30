#include <stdio.h>

int main ()

{
    int i, n, x, max;

    scanf ("%d", &n);

    max = 0;

    for (i = 0; i < n; i++)

    {
        scanf ("%d", &x);

        if (max < x)
        {
            max = x;
        }
        

    }

    printf ("%d\n", max);

    return 0;
}