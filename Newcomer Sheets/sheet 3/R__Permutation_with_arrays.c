#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned int i, j, n, count, x1, x2;

    scanf ("%u", &n);

    unsigned int a[n], b[n];

    for ( i = 0; i < n; i++)
    {
        scanf ("%u", &a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        scanf ("%u", &b[i]);
    }
    

    for ( i = 0, count = 0, x1 = 0, x2 = 0; i < n; i++, x1 = 0, x2 = 0)
    {
        for  (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                x1++;
            }

            if (a[i] == b[j])
            {
                x2++;

                b[j] = 0;
            }
            
        }

        if (x1 == x2)
        {
            count += x1;
        }
        
    }

    if (count == n)
    {
        printf ("yes\n");
    }

    else
    {
        printf ("no\n");
    }
    

    return 0;
}