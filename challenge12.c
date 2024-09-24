#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,ch1,ch2,ch3,ch4;
printf("donner un nombre de quatre chiffres:");
scanf("%d",&n);
ch1=n%10;
ch2=(n/10)%10;
ch3=(n/100)%10;
ch4=n/1000;
printf("l'inverse est:");
printf("%d",ch1);
printf("%d",ch2);
printf("%d",ch3);
printf("%d",ch4);
    return 0;
}
