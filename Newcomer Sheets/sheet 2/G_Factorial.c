#include <stdio.h>

int main ()

{
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    int i, j, n, x;

    long long int x1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

         {


             scanf("%d", &x);

             for (j = 1, x1 = 1; j <= x; j++)

                {
                    x1 *= j;

                }

            printf("%lld\n", x1);

         }

            
    

    

    return 0;
}