#include <stdio.h>
#include <stdlib.h>

int main()
{
double km,yards;
printf("donner la distance en km:");
scanf("%lf",&km);
yards=km*1093.61;
printf("la distance en yards est :%.2lf",yards);
    return 0;
}
