#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned int i;

    char s[100060];

    scanf ("%s", s);

    for ( i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }

        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }

        else
        {
            s[i] = s[i] - 32;
        }
        
    }

    printf ("%s\n", s);
    

    return 0;
}