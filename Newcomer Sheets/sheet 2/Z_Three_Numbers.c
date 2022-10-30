#include <stdio.h>

int main ()

{
    int x, y, z, k, s, count;

    scanf ("%d%d", &k, &s);

    count = 0;

    for ( x = 0; x <= k; x++)
    {
        for ( y = 0; y <= k; y++)
        {
            z = s - (x + y);

            if (0 <= z && z <= k)
            {
                count++;
            }
            
        }
        
    }

    printf ("%d\n", count);
    

    return 0;
}