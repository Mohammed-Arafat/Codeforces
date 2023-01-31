#include <stdio.h>
#include <string.h>

void url(char str[]);


void url(char str[])
{
    unsigned int i;

    for ( i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'u' || str[i] == 'U') && (str[i + 1] == 's' || str[i + 1] == 'S') &&(str[i + 2] == 'e' || str[i + 2] == 'E') && (str[i + 3] == 'r' || str[i + 3] == 'R') && (str[i + 4] == 'n' || str[i + 4] == 'N') && (str[i + 5] == 'a' || str[i + 5] == 'A') && (str[i + 6] == 'm' || str[i + 6] == 'M') && (str[i + 7] == 'e' || str[i + 7] == 'E') && (str[i + 8] == '='))
        {
            printf("username: ");

            for ( i += 9; str[i] != '\0' && str[i] != '&'; i++)
            {
                if (str[i + 1] == '\0' || str[i + 1] == '&')
                {
                    if (str[i + 1] == '\0')
                    {
                        printf("%c\n", str[i]);
                        goto end;
                    }
                    else
                    {
                        printf("%c\n", str[i]);
                    }
                    
                    
                }
                else
                {
                    printf("%c", str[i]);
                }
            }
            
        }
        else if ((str[i] == 'p' || str[i] == 'P') && (str[i + 1] == 'w' || str[i + 1] == 'W') && (str[i + 2] == 'd' || str[i + 2] == 'D') && (str[i + 3] == '='))
        {
            printf("pwd: ");

            for ( i += 4; str[i] != '\0' && str[i] != '&'; i++)
            {
                if (str[i + 1] == '\0' || str[i + 1] == '&')
                {
                    if (str[i + 1] == '\0')
                    {
                        printf("%c\n", str[i]);
                        goto end;
                    }
                    else
                    {
                        printf("%c\n", str[i]);
                    }
                    
                    
                }
                else
                {
                    printf("%c", str[i]);
                }
            }
        }
        else if ((str[i] == 'p' || str[i] == 'P') && (str[i + 1] == 'r' || str[i + 1] == 'R') && (str[i + 2] == 'o' || str[i + 2] == 'O') && (str[i + 3] == 'f' || str[i + 3] == 'F') && (str[i + 4] == 'i' || str[i + 4] == 'I') && (str[i + 5] == 'l' || str[i + 5] == 'L') && (str[i + 6] == 'e' || str[i + 6] == 'E') && (str[i + 7] == '='))
        {
            printf("profile: ");

            for ( i += 8; str[i] != '\0' && str[i] != '&'; i++)
            {
                if (str[i + 1] == '\0' || str[i + 1] == '&')
                {
                    if (str[i + 1] == '\0')
                    {
                        printf("%c\n", str[i]);
                        goto end;
                    }
                    else
                    {
                        printf("%c\n", str[i]);
                    }
                    
                    
                }
                else
                {
                    printf("%c", str[i]);
                }
            }
        }
        else if ((str[i] == 'r' || str[i] == 'R') && (str[i + 1] == 'o' || str[i + 1] == 'O') && (str[i + 2] == 'l' || str[i + 2] == 'L') && (str[i + 3] == 'e' || str[i + 3] == 'E') && (str[i + 4] == '='))
        {
            printf("role: ");

            for ( i += 5; str[i] != '\0' && str[i] != '&'; i++)
            {
                if (str[i + 1] == '\0' || str[i + 1] == '&')
                {
                    if (str[i + 1] == '\0')
                    {
                        printf("%c\n", str[i]);
                        goto end;
                    }
                    else
                    {
                        printf("%c\n", str[i]);
                    }
                    
                    
                }
                else
                {
                    printf("%c", str[i]);
                }
            }
        }
        else if ((str[i] == 'k') || (str[i] == 'K') && (str[i + 1] == 'e') || (str[i + 1] == 'E') && (str[i + 2] == 'y') || (str[i + 2] == 'Y') && (str[i + 3] == '='))
        {
            printf("key: ");

            for ( i += 4; str[i] != '\0' && str[i] != '&'; i++)
            {
                if (str[i + 1] == '\0' || str[i + 1] == '&')
                {
                    if (str[i + 1] == '\0')
                    {
                        printf("%c\n", str[i]);
                        goto end;
                    }
                    else
                    {
                        printf("%c\n", str[i]);
                    }
                    
                    
                }
                else
                {
                    printf("%c", str[i]);
                }
            }
        }
        
    }
    end:;
}




int main()
{
    char str[10010];

    gets(str);

    url(str);

    return 0;
}