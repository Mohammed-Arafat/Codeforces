#include <stdio.h>

int main ()

{
    int i;

    long long l;

    char ch;

    float f;

    double d;

    scanf ("%d%lld %c%f%lf", &i, &l, &ch, &f, &d );

    printf ("%d\n%lld\n%c\n%.2f\n%.1lf\n", i, l, ch, f, d );

    return 0;
}