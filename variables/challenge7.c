#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b,c,M;
printf("donner le 1er nombre :");
scanf("%lf",&a);

printf("donner le 2ème nombre :");
scanf("%lf",&b);

printf("donner le 3ème nombre :");
scanf("%lf",&c);

M=((a*2)+(b*3)+(c*5))/10;
printf("la moyenne est :%.2lf",M);
    return 0;
}
