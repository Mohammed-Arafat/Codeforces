#include <stdio.h>

int main ()

{
    char x;

    scanf ("%c", &x );

    if (x >= 'A' && x <= 'Z')
    {
        printf ("ALPHA\nIS CAPITAL\n");
    }

    else if (x >= 'a' && x <= 'z')
    {
        printf ("ALPHA\nIS SMALL\n");
    }

    else if (x == (int)x)
    {
        printf ("IS DIGIT\n");
    }
    
    


    

    return 0;
}