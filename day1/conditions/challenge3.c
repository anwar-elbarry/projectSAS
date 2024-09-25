#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s;
    printf("donner le nombre  A:");
    scanf("%d",&a);
    printf("donner le nombre  B:");
    scanf("%d",&b);

   if(a==b)
    s=(a+b)*3;
   else
    s=a+b;
printf("la somme de %d et %d est:%d",a,b,s);

    return 0;
}
