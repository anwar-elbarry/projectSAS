#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,taille,j=0,temp;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille],TC[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
for(i=0;i<taille;i++){
        TC[j]=T[i];
        j++;
}
//tableau original
printf("le tableau original:");
for(i=0;i<taille;i++){
        printf("%d",T[i]);
        if(i<taille-1)
            printf(",");
}
printf("\n");
//le copie du tableau
printf("le copie du tableau :");
for(i=0;i<taille;i++){
        printf("%d",TC[i]);
        if(i<taille-1)
            printf(",");
}
printf("\n");
    return 0;
}
