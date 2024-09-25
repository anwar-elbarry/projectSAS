#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,counter,i;
printf("donner un nombre:");
scanf("%d",&n);
counter=1;//because any number start with 1 digit
do{
    n=n/10;
    counter++;
}while((n/10)!=0);
printf("Nombre de chiffres est :%d",counter);
    return 0;
}
