#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double a,b,c,M;
printf("donner le 1er nombre :");
scanf("%lf",&a);

printf("donner le 2ème nombre :");
scanf("%lf",&b);

printf("donner le 3ème nombre :");
scanf("%lf",&c);

M=pow((a * b * c),(1.0/3.0));
printf("la moyenne géométrique est :%.2lf",M);
    return 0;
}
