#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,n,taille,s=0;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
for(i=0;i<taille;i++){
        s+=T[i];
  printf("%d",T[i]);
if(i<taille-1)
    printf("+");
}
printf("=%d",s);
    return 0;
}
