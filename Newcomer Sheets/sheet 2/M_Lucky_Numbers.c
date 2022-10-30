#include <stdio.h>

int main ()

{
    unsigned long a, b, f, fn, i, j, p, x;

    scanf ("%lu%lu", &a, &b);

    fn = 0;

    for ( i = a; i <= b; i++)
    {
        x = i;

        f = 0;

        while (x > 0)
        {
            p = x % 10;

            if (p != 4 && p != 7)
            {
                f = 1;
            }
            
            x /= 10; 
        }

        if (f == 0)
        {
            printf ("%lu ", i);

            fn = 1;
        }
        


    }

    if (fn == 0)
    {
        printf ("-1\n");
    }
    
    


    
   
    

    return 0;
}