#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,i,counter;
printf("donner un nombre entier:");
scanf("%d",&n);
counter=0;
do{
        i++;
    if((i%2)!=0){
         printf("%d  ",i);
        counter++;
    }
}while(counter<n);
    return 0;
}
