#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Tableau en Ordre Croissant
int main()
{
int i,taille,j,temp;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
for(i=0;i<taille;i++){
       for(j=i+1;j<taille;j++){
            if (T[i]>T[j]){
                temp=T[j];
                T[j]=T[i];
                T[i]=temp;
            }
       }
}
printf("Tableau en Ordre Croissant:");
for(i=0;i<taille;i++){
    printf("%d",T[i]);
    if(i<taille-1)
        printf(",");
    }
    return 0;
}
