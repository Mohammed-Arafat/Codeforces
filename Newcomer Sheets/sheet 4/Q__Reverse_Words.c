#include <stdio.h>

#include <string.h>

int main()

{
    int i, j, p;

    char str[1000050];

    gets(str);

    for ( i = 0, p = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i + 1] == '\0')
        {
            for ( j = i; p >= 0; p--, j--)
            {
                if (str[j] >= 'A' && str[j] <= 'z')
                {
                    printf ("%c", str[j]);
                }
                
            }

            p = 0;

            if (str[i + 1] == '\0')
            {
                printf ("\n");
            }

            else
            {
                printf (" ");
            }
            
            
            
        }

        else
        {
            p++;
        }
        
        
    }



    return 0;
}