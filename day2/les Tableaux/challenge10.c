#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,taille,n,counter=0;
//demander la taill du tableau
printf("donner le nombre d'elements du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
printf("donner l'element de recherche:");
scanf("%d",&n);
for(i=0;i<taille;i++){
    if(T[i]==n){
        counter++;
    }
}
if (counter!=0)
    printf("l'element %d est present",n);
else
    printf("l'element %d n'est existe pas",n);
    return 0;
}
