#include <stdio.h>

#include <string.h>

int main ()

{
    char str[1000050];

    unsigned int count = 0, i;

    gets (str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
        {
            if ((str[i + 1] >= 'A' && str[i + 1] <= 'z') == 0)
            {
                count++;
            }
        }

    }

    printf ("%u\n", count);



    return 0;
}
