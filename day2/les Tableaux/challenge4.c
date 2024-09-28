#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,n,taille,tempt,max;
//demander la taill du tableau
printf("donner le nombre d'éléments du tableau :");
scanf("%d",&taille);
int T[taille];
for(i=0;i<taille;i++){
    printf("le nombre %d:",i+1);
    scanf("%d",&T[i]);
}
max=T[0];
for(i=1;i<taille;i++){
        if(max<T[i]){
            tempt=T[i];
            T[i]=max;
            max=tempt;
        }

}
printf("le maximum de ce tabeau est :%d",max);
    return 0;
}
