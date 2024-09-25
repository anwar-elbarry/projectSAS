#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double R,Pi=3.12,volume;
printf("donner le rayon :");
scanf("%lf",&R);

volume=(4.0/3.0)*Pi*pow(R,3.0);
printf("la  est :%.2lf",volume);
    return 0;
}
