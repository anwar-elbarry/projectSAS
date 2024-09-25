#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ int n,inverse;
printf("donner un nombre:");
scanf("%d",&n);
inverse=0;

do{
    inverse=(inverse*10)+(n%10);
    n=n/10;
}while(n!=0);
printf("l'inverse est :%d",inverse);
    return 0;
}
