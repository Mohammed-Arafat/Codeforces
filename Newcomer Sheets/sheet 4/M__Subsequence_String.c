#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned int i, j, f;

    char str[10050], p[] = "hello";

    scanf ("%s", str);

    for ( i = 0, j = 0, f = 0; str[i] != '\0'; i++)
    {
        if (p[j] == str[i])
        {
            f++;

            j++;

            if (f == 5)
            {
                break;
            }
            
        }
        
        
    }
    

    if (f == 5)
    {
        printf ("YES\n");
    }
    else
    {
        printf ("NO\n");
    }
    

    return 0;
}