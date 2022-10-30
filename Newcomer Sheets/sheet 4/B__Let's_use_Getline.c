#include<stdio.h>

int main()

{
    char s [1000000]; 

    int i;

    gets (s);

    for ( i = 0; s [i] != '\\'; i++)
    {
        printf ("%c", s [i]);
    }

    return 0;


}