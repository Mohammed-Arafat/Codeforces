#include <stdio.h>

int main ()

{
    unsigned int i, n;

    unsigned int p[27] = {0};

    scanf ("%u\n", &n);

    char in;

    for ( i = 0; i < n; i++)
    {
        scanf ("%c", &in);

        p[in - 97]++;
    }
    


    for ( i = 0; i < 27; i++)
    {
        again:;

        if (p[i] > 0)
        {
            printf ("%c", i + 97);

            p[i]--;

            goto again;
        }
        
    }

    printf ("\n");

    return 0;
}