#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned int i, x, f, n;

    scanf ("%u", &n);

    char str[n];

    scanf ("%s", str);

    for ( i = 1, f = 0; str[i] != '\0'; i++)
    {
        if (str[i - 1] != str[i])
        {
            f++;
        }
        
    }

    printf ("%u\n", f + 1);
    
    return 0;
}