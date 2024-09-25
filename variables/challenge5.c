#include <stdio.h>
#include <stdlib.h>

int main()
{
double c;
printf("donner la temperature:");
scanf("%lf",&c);

if (c<0)
     printf("solide");


else if (c<100 && c>=0)
           printf("liquide");

else
        printf("Gaz");

    return 0;
}
