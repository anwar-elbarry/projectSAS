#include <stdio.h>
#include <stdlib.h>
int Maximum (int a , int b){
    if(a>b)
        printf("le Maximum est %d",a);
    else if (b>a)
        printf("le Maximum est %d",b);
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
   Maximum(a,b);
    return 0;
}
