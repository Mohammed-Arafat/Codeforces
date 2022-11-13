#include <stdio.h>

#include <string.h>

int main ()

{
    char str[10000000], x;

    unsigned int i, count[200], length;

    scanf ("%s", str);

    length = strlen (str);

    for ( i = 0; i < length; i++)
    {
        count[str[i]]++;
    }

    for ( i = 'a';i >= 'a' && i <= 'z'; i++)
    {
        if (count[i] > 0)
        {
            printf ("%c : %u\n", i, count[i]);
        }
        
    }
    

    return 0;
}