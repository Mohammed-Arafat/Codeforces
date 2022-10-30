#include <stdio.h>

#include <string.h>

int main ()

{
    char x[30], y[30];

    int v;

    scanf ("%s%s", x, y);

    v = strcmp (x , y);

    if (v < 0)

    {
        printf ("%s\n", x);
    }

    else if (v > 0)
    {
        printf ("%s\n", y);
    }

    else
    {
        printf ("%s\n", x);
    }
    
    

    return 0;
}