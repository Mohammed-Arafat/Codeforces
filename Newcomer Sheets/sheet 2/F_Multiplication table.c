#include <stdio.h>

int main ()

{
    int i, n, m;

    scanf ("%d", &n);

    for ( i = 1; i <= 12; i++)
    {
         m = n * i;

         printf ("%d * %d = %d\n", n, i, m);
    }
    

    return 0;
}