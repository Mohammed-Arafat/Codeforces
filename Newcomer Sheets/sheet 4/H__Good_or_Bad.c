#include <stdio.h>

#include <string.h>

int main ()

{
    unsigned short tastcase, t;

    unsigned int i, j, f, n;

    char str[100050];

    scanf ("%hu", &tastcase);

    for ( t = 1, f = 0; t <= tastcase; t++, f = 0)
    {
        scanf ("%s", str);

        n = strlen(str);

        for ( i = 0; i <= n - 3; i++)
        {
            for ( j = i; j < i + 3; j++)
            {
                if (str[j] == '0')
                {
                    if (str[j + 1] == '1')
                    {
                        if (str[j + 2] == '0')
                        {
                            f = 1;

                            goto accepted;
                        }
                        
                    }
                    
                }

                else if (str[j] == '1')
                {
                    if (str[j + 1] == '0')
                    {
                        if (str[j + 2] == '1')
                        {
                            f = 1;

                            goto accepted;
                        }
                        
                    }
                    
                }
                
            }
            
        }
        accepted:;

        if (f == 1)
        {
            printf ("Good\n");
        }

        else
        {
            printf ("Bad\n");
        }
        
        
        
    }
    


    return 0;
}