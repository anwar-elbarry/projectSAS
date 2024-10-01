#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct etudient {
     char nom[10];
     char prenom[10];
     int age;
};
int main()
{
    struct etudient etd1;
    strcpy(etd1.nom,"anouar");
    strcpy(etd1.prenom,"elbarry");
    etd1.age=19;
    printf("nom:%s\n",etd1.nom);
    printf("prenom:%s\n",etd1.prenom);
    printf("age:%d",etd1.age);
    return 0;
}
