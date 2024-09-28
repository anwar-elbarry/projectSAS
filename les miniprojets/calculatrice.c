#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,i;
char c;
do{
//menu
printf("********************MENU*******************\n");
printf("*                                         *\n");
printf("*        1-addition                       *\n");
printf("*        2-Soustraction                   *\n");
printf("*        3-Multiplication                 *\n");
printf("*        4-Division                       *\n");
printf("*        5-Moyenne                        *\n");
printf("*        6-Valeur absolue                 *\n");
printf("*        7-Exponentiation                 *\n");
printf("*        8-Racine carrée     9-QUITTER    *\n");
printf("*                                         *\n");
printf("*******************************************\n");
//le choix
printf("\n");
choice:
printf("choiser un nombre entre(1 et 9):");
scanf("%d",&n);
int nbr,nb,add=0,a,b,exposant,base,s;
switch (n){
//addition
case 1:
    printf("_________________addition________________\n");
    printf("combien de nombres veux-tu ajouter:");
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
        printf("doneer le nombre %d:",i+1);
        scanf("%d",&nb);
        add+=nb;
    }
    printf("le resultat est :%d \n",add);
    break;
//Soustraction
case 2:
    printf("_______________Soustraction______________\n");
    printf("donner le nombre A:");
    scanf("%d",&a);
    printf("donner le nombre B:");
    scanf("%d",&b);
    printf("%d - %d = %d \n",a,b,a-b);
    break;
//Multiplication
case 3:
    printf("______________Multiplication_____________\n");
    printf("combien de nombres veux-tu ajouter:");
    scanf("%d",&nbr);
    add=1;
    for(i=0;i<nbr;i++){
        printf("doneer le nombre %d:",i+1);
        scanf("%d",&nb);
        add*=nb;
    }
    printf("le resultat est :%d \n",add);
    break;
//Division
case 4:
    printf("_________________Division_______________\n");
    printf("donner le nombre A:");
    scanf("%d",&a);
    printf("donner le nombre B:");
    scanf("%d",&b);
    if(b!=0){
        printf("%d / %d = %d\n",a,b,a/b);
    }
    else
        printf("erreure pas de division par 0! \n");

    break;
//Moyenne
case 5:
    printf("_________________Moyenne_______________\n");
    printf("combien de nombres veux-tu ajouter:");
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
        printf("doneer le nombre %d:",i+1);
        scanf("%d",&nb);
        add+=nb;
    }
    printf("la moyenne est :%d \n",add/nbr);
    printf("_______________________________________\n");

    break;
//Valeur absolue
case 6:
    printf("_________________Valeur-absolue_______________\n");
    printf("donner un nombre:");
    scanf("%d",&nbr);
   if(nbr>=0)
    printf("la valeur absolue de %d est:%d \n",nbr,nbr);
   else
    printf("la valeur absolue de %d est:%d \n",nbr,-nbr);
    printf("______________________________________________\n");

    break;
//Exponentiation
  printf("_________________Exponentiation_______________\n");
case 7:
   printf("donner la base:");
   scanf("%d",&base);
   printf("donner l'exposant:");
   scanf("%d",&exposant);
   s=1;
   for(i=0;i<exposant;i++){
   s*=base;
}
   printf("%d^%d=%d\n",base,exposant,s);
   break;
//Racine carrée
  printf("_________________Racine carree_______________\n");
case 8:
   start:
   printf("donner un nombre entier positif:");
   scanf("%d",&nbr);
    if(nbr>0)
       printf("la racine carree de %d est :%.2lf\n",nbr,sqrt(nbr));
    else
            goto start;
    break;
//quitter
  printf("______________________quitter___________________\n");
case 9:
            break;
    default:
            goto choice;
}
}while ((n>0 && n<9));
    return 0;
}
