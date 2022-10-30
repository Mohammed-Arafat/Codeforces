#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned short tastcase, t, x;

    char s[130];

    scanf ("%hu", &tastcase);

    for ( t = 1; t <= tastcase; t++)
    {
        scanf ("%s", s);

        x = strlen (s);

        if (x <= 10)
        {
            printf ("%s\n", s);
        }

        else
        {
            printf ("%c%hd%c\n", s[0], (x - 2), s[x - 1]);
        }
        
        
    }
    

    return 0;
}