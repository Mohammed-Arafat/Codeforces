#include <stdio.h>

#include <math.h>

int main ()

{
    double a, b, c, d, pab, pcd;

    scanf ("%lf%lf%lf%lf", &a, &b, &c, &d);

    pab = b * log (a);

    pcd = d * log (c);

    if (pab >  pcd)
    {
        printf ("YES\n");
    }

    else
    {
        printf ("NO\n");
    }
    
    

    return 0;
}