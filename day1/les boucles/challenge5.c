#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int exposant,base,s,i,s;
printf("donner la base:");
scanf("%d",&base);
printf("donner l'exposant:");
scanf("%d",&exposant);
s=1;
for(i=0;i<exposant;i++){
    s*=base;
}
printf("%d^%d=%d",base,exposant,s);
    return 0;
}
