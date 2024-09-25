#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double x,y,z,d,M;
printf("donner X :");
scanf("%lf",&x);

printf("donner Y :");
scanf("%lf",&y);

printf("donner Z :");
scanf("%lf",&z);
M=sqrt((x*2)-x)+sqrt((y*2)-y)+sqrt((z*2)-z);
printf("la distance est :%.2lf",M);
    return 0;
}
