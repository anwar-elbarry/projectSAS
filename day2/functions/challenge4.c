#include <stdio.h>
#include <stdlib.h>
int minimum (int a , int b){
    if(a>b)
        printf("le minimum est %d",b);
    else if (b>a)
        printf("le minimum est %d",a);
    else
    printf("%d = %d",a,b);
}

int main()
{
    int a,b;
   printf("donner le nombre 1:");
   scanf("%d",&a);
   printf("donner le nombre 2:");
   scanf("%d",&b);
   minimum(a,b);
    return 0;
}
