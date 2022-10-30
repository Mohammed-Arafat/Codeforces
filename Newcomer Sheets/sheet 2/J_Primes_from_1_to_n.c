#include <stdio.h>

int main ()

{
    int i, j, f, n, d;

    scanf ("%d", &n);

    for ( i = 2; i <= n; i++)
    {
        f = 0;

        if (n == 2)
        {
            printf ("2\n");

            break;
        }


        for ( j = 2; j < i; j++)
        {
            d = i % j;

            if (d == 0)
            {
                f++;
            }
            
        }

        if (f == 0)
        {
            printf ("%d ", i);
        }
        
        
        


        
    }
    


    return 0;
}