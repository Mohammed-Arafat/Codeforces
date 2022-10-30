#include <stdio.h>

int main()

{
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);


    int i, a, x;

    scanf("%d", &a);

    for (i = 2; i < a; i++)

    {

        x = a % i;

        if (x == 0)
        {
            printf("NO\n");

            break;

        }
        

    }

    if (x != 0)
    {
        printf("YES\n");
    }
    
    
    return 0;
}





