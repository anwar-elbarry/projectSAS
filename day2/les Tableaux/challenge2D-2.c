#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,j,taille,col,line;
//demander la taill du tableau
printf("donner le nombre de colonnes :");
scanf("%d",&col);
printf("donner le nombre de lines :");
scanf("%d",&line);
int T[line][col];

for(i=0;i<line;i++){
        printf("|");
    for(j=0;j<col;j++){
            T[i][j]=0;
        printf("%d",T[i][j]);
        if(j<col-1)
            printf(",");
    }
     printf("|");
    printf("\n");
}
    return 0;
}
