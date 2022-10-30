#include <stdio.h>

int main ()

{
    char x, r;

    scanf ("%c", &x );

    if (x >= 'A' && x <= 'Z')
    {
        r = x + 32;
    }

    else if (x >= 'a' && x <= 'z')
    {
        r = x - 32;
    }

    printf ("%c\n", r );
    
    



    return 0;
}