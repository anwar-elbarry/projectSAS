#include <stdio.h>
#include <stdlib.h>

int main()
{
double vitess,ms;
printf("donner la vitess en (km/h):");
scanf("%lf",&vitess);
ms=vitess*0.27778;
printf("la vitess en (m/s) est :%.2lf",ms);
    return 0;
}
