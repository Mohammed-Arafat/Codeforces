#include <stdio.h>

int main ()

{
    unsigned int i, j, n;

    scanf ("%u", &n);

    unsigned int ar [n + 1];

    for ( i = 1; i <= n; i++)
    {
        scanf ("%u", &ar [i]);
    }


    for ( j = n; j >= 1; j--)
    {
        printf ("%u ", ar [j]);
    }
    
    printf ("\n");


    return 0;
}