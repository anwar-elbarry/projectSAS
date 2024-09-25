#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,s;
    start:
    printf("donner un nombre superieur a 0:");
    scanf("%d",&n);
    if(n<=0)
        goto start;
    s=1;

    for(i=n;i>1;i--){
        s*=i;
    }
     printf("Factorielle de %d est :%d",n,s);

    return 0;
}
