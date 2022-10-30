#include <stdio.h>

#include <string.h>

int main ()

{
    char a [12], b [12], x [3];

    int cnt;

    gets (a);

    gets (b);

    printf ("%d %d\n", strlen (a), strlen (b));

    printf ("%s%s\n", a, b);

    x [0] = a [0];

    x [1] = b [0];

    a [0] = x [1];

    b [0] = x [0];

    printf ("%s %s\n", a, b);


    return 0;
}