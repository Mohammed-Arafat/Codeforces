#include <stdio.h>

#include <string.h>

int main()

{
    int i, j, length, n, score;

    scanf("%d\n", &n);

    char str[2 * n], x;

    gets(str);

    length = strlen (str);

    for ( i = 0, score = 0; str[i] != '\0' ; i++)
    {
        if (str[i] == 'V')
        {
            score += 5;
        }

        else if (str[i] == 'W')
        {
            score += 2;
        }

        else if (str[i] == 'X' && i < length - 1)
        {
            i++;
        }

        else if (str[i] == 'Y' && i < length - 1)
        {
            if (i < length - 2)
            {
                str[length] = str[i + 1];
                length++;
                i++;
            }
            
        }

        else if (str[i] == 'Z' && i < length - 1)
        {
            if (str[i + 1] == 'V')
            {
                score /= 5;

                i++;
            }

            else if (str[i + 1] == 'W')
            {
                score /= 2;

                i++;
            }
            
        }
        
    }


    printf ("%d\n", score);


    return 0;
}