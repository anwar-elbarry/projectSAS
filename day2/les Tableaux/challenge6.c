#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,n,taille,fact;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
printf("donner le facteur :");
scanf("%d",&n);
for(i=0;i<taille;i++){
        fact=T[i]*n;
        printf("%d * %d = %d\n",T[i],n,fact);
}

    return 0;
}
