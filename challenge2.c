#include <stdio.h>
#include <stdlib.h>

int main()
{
double k,c;
printf("donner la temperature en celsuis:");
scanf("%lf",&c);
k=c+273.15;
printf("la temperature en kelvin est :%.2lf",k);
    return 0;
}
