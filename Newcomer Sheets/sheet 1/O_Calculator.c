#include <stdio.h>

int main ()

{
    int a, b, r;

    char s;

    scanf ("%d%c%d", &a,&s,&b );

    if (s == '+')
    {
        r = a + b;
    }

    else if (s == '-')
    {
        r = a - b;
    }

    else if (s == '*')
    {
        r = a * b;
    }

    else if (s == '/')
    {
        r = a / b;
    }

    printf ("%d\n", r );
    
    
    
    

    return 0;
}