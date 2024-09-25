#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b;
printf("donner le nombre A:");
scanf("%lf",&a);

printf("donner le nombre B:");
scanf("%lf",&b);
printf("%.2lf + %.2lf =%.2lf\n",a,b,a+b);
printf("%.2lf - %.2lf =%.2lf\n",a,b,a-b);
printf("%.2lf * %.2lf =%.2lf\n",a,b,a*b);
if(a != 0 && b != 0)
printf("%.2lf / %.2lf =%.2lf\n",a,b,a/b);
else
printf("a ou b est null");
    return 0;
}
