#include <stdio.h>
#include <stdlib.h>
int fact (int a){
    int s=1;
    for(int i=2;i<=a;i++){
        s*=i;
    }
    printf("Factorielle de %d est :%d",a,s);
}

int main()
{
    int a,b;
   printf("donner un nombre:");
   scanf("%d",&a);
   fact(a);
    return 0;
}
