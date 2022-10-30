#include <stdio.h>

#include <string.h>

int main ()

{
    char s[1000040];

    int i, sum = 0;

    scanf ("%s", s);

    for ( i = 0; s[i] != '\0'; i++)
    {
        sum += s[i] - '0';
    }

    printf ("%d\n", sum);   

    return 0;
}