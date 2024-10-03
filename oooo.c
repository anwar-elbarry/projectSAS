#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define max_string 100
#define max_char 30
#define max_date 30


 struct Clients{

    char Nom[max_string][max_char];
    char prenom[max_string][max_char];
    char telephon[max_string][max_char];
    char statut[max_string][max_char];
    int age[max_string];
    int refer[max_string];
    char date[max_string][max_date];

};
struct Clients client = {

     .prenom = {"anouar","yassine","samir","khalid","omar","salma","rachida","wissal","farida","nabil"},
     .Nom = {"elbarry","sliko","chnaoui","bohakem","bouchta","lamin","senhaji","dodan","yaacoubi","nssiri"},
     .telephon = {"061246374","0687653945","06175842","06193476","06120583","06148759","07136528","07184260","07197014","07125439"},
     .statut = {"valide","reporte","annule","traite","reporte","annule","reporte","traite","annule","valide"},
     .age = {18,22,29,30,35,45,32,19,21,38},
     .refer = {1,2,3,4,5,6,7,8,9,10},
     .date = {"03/02/2024","07/05/2024","12/02/2024","04/06/2024","15/08/2024","24/05/2024","21/03/2024","02/04/2024","25/07/2024","05/05/2024"},

};
int nbr_clients=10,valide=2,reporte=3,annule=3,traite=2;
int unique_reference = 11;


void menu(){
  printf("\n******************** MENU reservation **************\n");
    printf("*                                                  *\n");
    printf("*     1 - Ajouter une reservation.                 *\n");
    printf("*     2 - Modifier une reservation.                *\n");
    printf("*     3 - Supprimer une reservation.               *\n");
    printf("*     4 - Afficher les details d'une reservation.  *\n");
    printf("*     5 - Triage.                                  *\n");
    printf("*     6 - Rechercher une reservations.             *\n");
    printf("*     7 - Statistiques.                            *\n");
    printf("*     8 - Quitter.                                 *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
};
void ajouter(){
    char nv_client[max_char];

    do {

      if (nbr_clients >= max_string) {
            printf("La limite maximale de clients a été atteinte!\n");
            break;
        }
     printf("Nom:");
     scanf("%[^\n]%*c",&client.Nom[nbr_clients]);

     printf("Prenom:");
     scanf("%[^\n]%*c",&client.prenom[nbr_clients]);
     do {
     printf("Telephone:");
     scanf("%[^\n]%*c",&client.telephon[nbr_clients]);
     }while(validation_tele(client.telephon[nbr_clients])==0);
     do{
     printf("Age:");
     scanf("%d",&client.age[nbr_clients]);
     getchar();
     }while(validation_age(client.age[nbr_clients])== 0);
     do{
     printf("Statut(valide, reporte, annule, traite):");
     scanf("%[^\n]%*c",&client.statut[nbr_clients]);

     if((strcmp(client.statut[nbr_clients],"valide")==0))
          valide++;
          else if((strcmp(client.statut[nbr_clients],"reporte")==0))
          reporte++;
          else if((strcmp(client.statut[nbr_clients],"annule")==0))
          annule++;
          else if((strcmp(client.statut[nbr_clients],"traite")==0))
          traite++;

     }while((strcmp(client.statut[nbr_clients],"valide")!= 0)&&
           (strcmp(client.statut[nbr_clients],"reporte")!= 0) &&
           (strcmp(client.statut[nbr_clients],"annule")!= 0) &&
           (strcmp(client.statut[nbr_clients],"traite")!= 0));
     do{
     printf("Date de reservation (JJ/MM/AAAA):");
     scanf("%[^\n]%*c",&client.date[nbr_clients]);

     client.refer[nbr_clients]=unique_reference;
      }while(validation_date(client.date[nbr_clients])==0);

     unique_reference++;
     nbr_clients++;
     do{
     printf("voulez-vous ajouter une nouvelle reservation (oui/non):");
     scanf("%[^\n]%*c",&nv_client);

     }while(strcmp(nv_client,"non") != 0 && strcmp(nv_client,"oui") !=0 );


    }while(strcmp(nv_client,"oui") == 0);
};

void modifier(){
     int recherch;
     int present=0;

     printf("donner le referece unique du client:");
     scanf("%d",&recherch);

     getchar();
     for(int i=0;i<nbr_clients;i++ ){

           if(recherch==client.refer[i]){

                if((strcmp(client.statut[i],"valide")==0))
                   valide--;
                else if((strcmp(client.statut[i],"reporte")==0))
                   reporte--;
                else if((strcmp(client.statut[i],"annule")==0))
                   annule--;
                else if((strcmp(client.statut[i],"traite")==0))
                   traite--;

     printf("Nom:");
     scanf("%[^\n]%*c",&client.Nom[i]);

     printf("Prenom:");
     scanf("%[^\n]%*c",&client.prenom[i]);

     printf("Telephone:");
     scanf("%[^\n]%*c",&client.telephon[i]);

     printf("Age:");
     scanf("%d",&client.age[i]);

     getchar();
     do{
     printf("Statut(valide, reporte, annule, traite):");
     scanf("%[^\n]%*c",&client.statut[nbr_clients]);

     if((strcmp(client.statut[i],"valide")==0))
          valide++;
          else if((strcmp(client.statut[i],"reporte")==0))
          reporte++;
          else if((strcmp(client.statut[i],"annule")==0))
          annule++;
          else if((strcmp(client.statut[i],"traite")==0))
          traite++;

     }while((strcmp(client.statut[i],"valide")!= 0)&&
           (strcmp(client.statut[i],"reporte")!= 0) &&
           (strcmp(client.statut[i],"annule")!= 0) &&
           (strcmp(client.statut[i],"traite")!= 0));

     printf("la Date:");
     scanf("%[^\n]%*c",&client.date[nbr_clients]);

     printf("Votre modification a reussi.");
     present++;
     break;
           }
     }
       if(present==0)
        printf("le reference %d n'existe pas.\n",recherch);
};
void supprimer(){

     int recherch;
     int present=0;
     printf("donner le referece unique du client:");
     scanf("%d",&recherch);

     for(int i=0;i<nbr_clients;i++ ){
           if(recherch==client.refer[i]){
                if((strcmp(client.statut[i],"valide")==0))
                   valide--;
                else if((strcmp(client.statut[i],"reporte")==0))
                   reporte--;
                else if((strcmp(client.statut[i],"annule")==0))
                   annule--;
                else if((strcmp(client.statut[i],"traite")==0))
                   traite--;
            for(int j=i;j<nbr_clients-1;j++){
                strcpy(client.Nom[j], client.Nom[j + 1]);
                strcpy(client.prenom[j], client.prenom[j + 1]);
                strcpy(client.telephon[j], client.telephon[j + 1]);
                client.age[j] = client.age[j + 1];
                strcpy(client.statut[j], client.statut[j + 1]);
                strcpy(client.date[j], client.date[j + 1]);
                client.refer[j] = client.refer[j + 1];
            }


            printf("supprition avec succes.");
            present=1;
            nbr_clients--;
            break;
           }
     }
        if(present==0)
        printf("le reference %d n'existe pas.\n",recherch);
}
void afficher(){
    for(int i=0;i<nbr_clients;i++){
        printf("\n________________client N%d________________\n",i+1);
        printf("-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);

    }

};

void tri(){
    int choix;
    printf("\n----------choix de tri--------\n");
    printf("   1-Tri par Nom.\n");
    printf("   2-Tri par statut.\n");
    do{
    printf("choiser un nombre (1/2):");
    scanf("%d",&choix);
    getchar();
    }while((choix != 1) && (choix !=2));
    switch(choix){
case 1:
    for(int i=0;i<nbr_clients-1;i++){
        for(int j=0;j<nbr_clients-i-1;j++){
             if (strcmp(client.Nom[j], client.Nom[j + 1]) > 0) {
                        //  Nom
                        char temp[max_char];
                        strcpy(temp, client.Nom[j]);
                        strcpy(client.Nom[j], client.Nom[j + 1]);
                        strcpy(client.Nom[j + 1], temp);

                        //  Prénom
                        strcpy(temp, client.prenom[j]);
                        strcpy(client.prenom[j], client.prenom[j + 1]);
                        strcpy(client.prenom[j + 1], temp);

                        //  Téléphone
                        strcpy(temp, client.telephon[j]);
                        strcpy(client.telephon[j], client.telephon[j + 1]);
                        strcpy(client.telephon[j + 1], temp);

                        //  Age
                        int age_temp = client.age[j];
                        client.age[j] = client.age[j + 1];
                        client.age[j + 1] = age_temp;

                        //  Statut
                        strcpy(temp, client.statut[j]);
                        strcpy(client.statut[j], client.statut[j + 1]);
                        strcpy(client.statut[j + 1], temp);

                        //  Date
                        strcpy(temp, client.date[j]);
                        strcpy(client.date[j], client.date[j + 1]);
                        strcpy(client.date[j + 1], temp);

                        //  Reference
                        int ref_temp = client.refer[j];
                        client.refer[j] = client.refer[j + 1];
                        client.refer[j + 1] = ref_temp;
                    }
        }
    }
     printf("Tri par Nom effectue avec succes.\n");
     afficher();
     break;
case 2:
    for(int i=0;i<nbr_clients;i++){
        if(strcmp("valide",client.statut[i])==0){
        printf("\n________________valide________________\n");
        printf("-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);
        }
    }
        for(int i=0;i<nbr_clients;i++){
        if(strcmp("reporte",client.statut[i])==0){
        printf("\n________________reporte________________\n");
        printf("-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);
        }
    }
        for(int i=0;i<nbr_clients;i++){
        if(strcmp("annule",client.statut[i])==0){
        printf("\n________________annule________________\n");
        printf("-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);
        }
    }
        for(int i=0;i<nbr_clients;i++){
        if(strcmp("traite",client.statut[i])==0){
        printf("\n________________traite________________\n");
        printf("-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);
        }
    }


    }
};

void rechercher(){
        int choix;
        int recherch;
        int present=0;
        char nom[max_char];
    printf("\n----------choix de recherche--------\n");
    printf("   1-recherche par reference unique.\n");
    printf("   2-recherche par nom.\n");
    do{
    printf("choiser un nombre (1/2):");
    scanf("%d",&choix);
    getchar();
    }while((choix != 1) && (choix !=2));
    switch(choix){
case 1:

     printf("donner le referece unique du client:");
     scanf("%d",&recherch);
     getchar();
     for(int i=0;i<nbr_clients;i++ ){
           if(recherch==client.refer[i]){

        printf("-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);

            present++;
            break;
           }
     }
        if(present==0)
        printf("le reference %d n'existe pas.\n",recherch);
        break;
case 2:
    printf("\n donner le Nom:");
    scanf("%[^\n]%*c",&nom);
    for(int i=0;i<nbr_clients;i++){
        if(strcmp(nom,client.Nom[i])==0){
        printf("____________________________\n");
        printf("\n-Nom:%s\n",client.Nom[i]);
        printf("-prenom:%s\n",client.prenom[i]);
        printf("-telephon:%s\n",client.telephon[i]);
        printf("-age:%d \n",client.age[i]);
        printf("-statut:%s\n",client.statut[i]);
        printf("-reference:%d\n",client.refer[i]);
        printf("-La Date:%s\n",client.date[i]);
        printf("____________________________\n");

        present++;
        break;
        }
    }
    if(present==0)
        printf("pas de client a ce nome");
    break;
    }
};
void statistique(){
    int s=0;
    int moyenne;
    int adult=0,enfant=0,grand=0;
    for(int i=0;i<nbr_clients;i++){
        s+=client.age[i];
    }
    moyenne=s/nbr_clients;

    for(int i=0;i<nbr_clients;i++){
        if(client.age[i]<=18)
            enfant++;
        else if(client.age[i]>18 && client.age[i]<=35)
            adult++;
        else
            grand++;
    }
    printf("la moyenne d'age:%d\n",moyenne);
    printf("____________________\n");
    printf("0-18 ans :%d\n",enfant);
    printf("19-35 ans:%d\n",adult);
    printf("36+ ans  :%d\n",grand);
    printf("____________________\n");
    printf("valide:%d\n",valide);
    printf("reporte:%d\n",reporte);
    printf("annule:%d\n",annule);
    printf("traite:%d\n",traite);

}

int validation_tele(char nombre[]){

     if(strlen(nombre)!=10){
        return 0;
     }
     if(!((nombre[0] == '0' && nombre[1] == '6') ||
          (nombre[0] == '0' && nombre[1] == '7'))){
            return 0;
     }

     for(int i=0;i<10;i++){
        if(!isdigit(nombre[i]))
            return 0;
     }
     return 1;
}
int validation_date(char date[]){
     if(date[2]!= '/' || date[5]!= '/' || date[10] != '\0'){
            return 0;
        }
        return 1;
}
int validation_age(int age[]){
     if(age < 1 || age > 100){
        return 0;
     }
     return 1;
}
int main() {
    int choix_menu;
 do {
        menu();
        printf("Choisir un nombre entre (1 et 8): ");
        scanf("%d", &choix_menu);
        getchar();
        switch (choix_menu) {
            case 1:
                ajouter();
                break;
            case 2:
                modifier();
                break;
            case 3:
                supprimer();
                break;
            case 4:
                afficher();
                break;
            case 5:
                tri();
                break;
            case 6:
                rechercher();
                break;
            case 7:
                statistique();
                break;
            case 8:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                break;
        }
    } while (choix_menu > 0 && choix_menu <= 7);
    return 0;
}
