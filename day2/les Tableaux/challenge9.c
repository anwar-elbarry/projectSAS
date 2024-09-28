#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,taille,temp;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
for (i=taille-1;i>=0;i--){
    printf("%d   ",T[i]);
}
    return 0;
}
