#include <stdio.h>

int main ()

{
    int i, f, x, y, n;

    scanf ("%d", &n);

    for ( i = 1, x = 0, y = 1; i <= n; i++)
    {
        f = x + y;

        if (i == n)
        {
            printf ("%d\n", x);
        }

        else
        {
           
           
            printf ("%d ", x);

            x = y;

            y = f;
           
           
           
        }
        
        
    }
    

    return 0;
}