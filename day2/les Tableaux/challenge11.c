#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,taille,n,nv;
//demander la taill du tableau
printf("donner le nombre d'elements du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
printf("donner la valeur que tu veux remplacer:");
scanf("%d",&n);
printf("donner une nouvelle valeur:");
scanf("%d",&nv);
for(i=0;i<taille;i++){
    if(T[i]==n){
        T[i]=nv;
    }
}
for(i=0;i<taille;i++){
    printf("%d   ",T[i]);
}
    return 0;
}
