#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,s,i;
printf("donner un nombre:");
scanf("%d",&n);

s=0;
for(i=1;i<=n;i++){
    s+=i;
     printf("%d",i);
    if(i<n)
       printf("+");
}
printf("=%d",s);
    return 0;
}
