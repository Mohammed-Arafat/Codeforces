#include <stdio.h>
#include <string.h>

void max_split(char str[]);



void max_split(char str[])
{
    unsigned int i, j, fl, fr, f, tr = 0;

    for ( i = 0, fl = 0, fr = 0, f = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'L')
        {
            fl++;
        }
        else
        {
            fr++;
        }

        if (fl == fr)
        {
            f++;

            fl = fr = 0;
            
        }
        
    }

    printf("%u\n", f);

    for ( i = 0, fl = 0, fr = 0; str[i] != '\0' ; i++)
    {
        if (str[i] == 'L')
        {
            fl++;
        }
        else
        {
            fr++;
        }

        if (fl == fr)
        {
            for ( j = tr; j <= i; j++)
            {
                if (j == i)
                {
                    printf("%c\n", str[j]);
                }
                else
                {
                    printf("%c", str[j]);
                }
                
            }

            tr = i + 1;
            
        }
        
    }
    
    
}


int main()
{
    char str[1010];

    gets (str);

    max_split(str);

    return 0;
}