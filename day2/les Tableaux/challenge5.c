#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,n,taille,tempt,min;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
min=T[0];
for(i=1;i<taille;i++){
        if(min>T[i]){
            tempt=T[i];
            T[i]=min;
            min=tempt;
        }

}
printf("le minimum de ce tabeau est :%d",min);
    return 0;
}
