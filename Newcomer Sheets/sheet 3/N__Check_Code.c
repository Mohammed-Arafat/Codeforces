#include <stdio.h>

int main ()

{
    unsigned short a, b, s;

    scanf ("%hu%hu", &a, &b);

    s = a + b + 1;

    int i, f;

    char str [s + 1];

    scanf ("%s", str);

    f = 0;

    if (str [a] == '-')
    {
        for ( i = 0; str [i] >= '0' && str [i] <= '9'; i++)
        {
            f++;

            if (str [i] == str [a - 1])
            {
                i++;
            }
            
        }
        
    }


    if (f == (a + b))
    {
        printf ("Yes\n");
    }

    else
    {
        printf ("No\n");
    }
    
    return 0;
}