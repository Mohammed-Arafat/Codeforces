#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned short t, tastcase, i;

    char s[60], ta[60];

    scanf ("%hu", &tastcase);

    for ( t = 1; t <= tastcase; t++)
    {
        scanf ("%s %s", s, ta);

        if (strlen (s) > strlen (ta))
        {
            for ( i = 0; i < strlen (ta); i++)
            {
                printf ("%c%c", s[i], ta[i]);
            }

            for ( i = strlen (ta); i < strlen (s); i++)
            {
                printf ("%c", s[i]);
            }

            printf ("\n");
            
            
        }

        else
        {
            for ( i = 0; i < strlen (s); i++)
            {
                printf ("%c%c", s[i], ta[i]);
            }

            for ( i = strlen (s); i < strlen (ta); i++)
            {
                printf ("%c", ta[i]);
            }

            printf ("\n");
            
            
        }
        
        
    }
    

    return 0;
}