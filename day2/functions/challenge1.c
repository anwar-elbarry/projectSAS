#include <stdio.h>
#include <stdlib.h>

int somme (int a , int b){
    return a+b;
}

int main()
{
    int a,b;
   printf("donner le nombre 1");
   scanf("%d",&a);
   printf("donner le nombre 2");
   scanf("%d",&b);
   printf("resultat :%d",somme(a,b));
    return 0;
}
