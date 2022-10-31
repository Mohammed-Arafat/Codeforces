#include <stdio.h>

#include <string.h>

int main ()

{
    char str [1050];

    unsigned short i, j, f = 0, length;

    scanf("%s", str);

    length = strlen(str);

    for ( i = 0, j = length - 1; i < length && j >= 0; i++, j--)
    {
        if (str[i] == str[j])
        {
            f++;
        }
    }

    if (f == length)
    {
        printf ("YES\n");
    }

    else
    {
        printf ("NO\n");
    }



    return 0;
}