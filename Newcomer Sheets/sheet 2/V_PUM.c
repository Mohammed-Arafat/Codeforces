#include <stdio.h>

int main ()

{
    int i, i1, i2, i3, n;

    scanf ("%d", &n);

    i1 = 0;

    i2 = 0;

    i3 = -1;


    for ( i = 1; i <= n; i++)
    {
        i1 = i3 + 2;

        i2 = i1 + 1;

        i3 = i2 + 1;

        printf ("%d %d %d PUM\n", i1, i2, i3);
        
    }
    


    return 0;
}