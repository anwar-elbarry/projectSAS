#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_string 100
#define max_char 30
#define max_nombres 30

struct contacts {
    char Nom[max_string][max_char];
    char numero[max_string][max_nombres];
    char e_mail[max_string][max_char];
    int id;
};

struct contacts contact = {
    .Nom = {"anouar", "yassine", "sammir", "khalid", "rabi3"},
    .numero = {"061246374", "07653891920", "0627364839", "0612343278", "0723438872"},
    .e_mail = {"john.doe@example.com", "sarah.connor@samplemail.com", "wonderland@fictional.com", "bob.builder@homemail.com", "charlie.brown@randommail.com"}
};

int nbr_contact = 4, choix_menu;
char choix[4], recherch[25];

void menu() {
    printf("\n******************** MENU Contacts ****************\n");
    printf("*                                                  *\n");
    printf("*     1 - Ajouter un Contact.                      *\n");
    printf("*     2 - Modifier un Contact.                     *\n");
    printf("*     3 - Supprimer un Contact.                    *\n");
    printf("*     4 - Afficher Tous les Contacts.              *\n");
    printf("*     5 - Rechercher un Contact.                   *\n");
    printf("*     6 - Nombre de numeros commencant par (07/06) *\n");
    printf("*     7 - Quitter.                                 *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
}

void ajouter() {
    do {
        getchar();
        printf("Nom: ");
        fgets(contact.Nom[nbr_contact], max_char, stdin);
        contact.Nom[nbr_contact][strcspn(contact.Nom[nbr_contact], "\n")] = 0; // remove newline

        printf("Numero: ");
        fgets(contact.numero[nbr_contact], max_nombres, stdin);
        contact.numero[nbr_contact][strcspn(contact.numero[nbr_contact], "\n")] = 0; // remove newline

        printf("E-mail: ");
        fgets(contact.e_mail[nbr_contact], max_char, stdin);
        contact.e_mail[nbr_contact][strcspn(contact.e_mail[nbr_contact], "\n")] = 0; // remove newline

        nbr_contact++;

        printf("Ajouter un nouveau contact (oui ou non): ");
        fgets(choix, 4, stdin);
        choix[strcspn(choix, "\n")] = 0;

    } while (strcmp(choix, "oui") == 0);
}

void modifier() {
    getchar();
    printf("Donner le nom de contact: ");
    fgets(recherch, max_char, stdin);
    recherch[strcspn(recherch, "\n")] = 0;

    for (int i = 0; i < nbr_contact; i++) {
        if (strcmp(recherch, contact.Nom[i]) == 0) {
            printf("Numero: ");
            fgets(contact.numero[i], max_nombres, stdin);
            contact.numero[i][strcspn(contact.numero[i], "\n")] = 0; // remove newline

            printf("E-mail: ");
            fgets(contact.e_mail[i], max_char, stdin);
            contact.e_mail[i][strcspn(contact.e_mail[i], "\n")] = 0; // remove newline

            printf("Votre modification a reussi.\n");
            return;
        }
    }
    printf("Le contact %s n'existe pas.\n", recherch);
}

void afficher() {
    for (int i = 0; i < nbr_contact; i++) {
        printf("\n*************** Contact N%d ***********\n", i + 1);
        printf("         Nom: %s\n", contact.Nom[i]);
        printf("         Numero: %s\n", contact.numero[i]);
        printf("         E-mail: %s\n", contact.e_mail[i]);
        printf("         id: %d\n",i+1);
        printf("\n***************************************\n");
    }
}

void supprimer() {
    getchar();
    printf("Donner le nom de contact: ");
    fgets(recherch, max_char, stdin);
    recherch[strcspn(recherch, "\n")] = 0;

    for (int i = 0; i < nbr_contact; i++) {
        if (strcmp(recherch, contact.Nom[i]) == 0) {
            for (int j = i; j < nbr_contact - 1; j++) {
                strcpy(contact.Nom[j], contact.Nom[j + 1]);
                strcpy(contact.numero[j], contact.numero[j + 1]);
                strcpy(contact.e_mail[j], contact.e_mail[j + 1]);
            }
            printf("%s supprime avec succes.\n", recherch);
            nbr_contact--;
            return;
        }
    }
    printf("[%s] n'existe pas dans les contacts.\n", recherch);
}

void rechercher() {
    getchar();
    printf("Donner le nom de contact: ");
    fgets(recherch, max_char, stdin);
    recherch[strcspn(recherch, "\n")] = 0;

    for (int i = 0; i < nbr_contact; i++) {
        if (strcmp(recherch, contact.Nom[i]) == 0) {
            printf("\n*************** Contact N%d ***********\n", i + 1);
            printf("         Nom: %s\n", contact.Nom[i]);
            printf("         Numero: %s\n", contact.numero[i]);
            printf("         E-mail: %s\n", contact.e_mail[i]);
            printf("         id: %d\n",i+1);
            printf("\n***************************************\n");
            return;
        }
    }
    printf("[%s] n'existe pas dans les contacts.\n", recherch);
}
void counte(){
 int count07=0,count06=0;
                    for (int i = 0; i < nbr_contact; i++) {
        if (strncmp(contact.numero[i], "07", 2) == 0) {
            count07++;
        } else if (strncmp(contact.numero[i], "06", 2) == 0) {
            count06++;
        }
    }
             printf("Nombre de numeros commencant par '07' est:%d\n",count07);
             printf("Nombre de numeros commencant par '06' est:%d\n",count06);
}
int main() {
    do {
        menu();
        printf("Choisir un nombre entre (1 et 7): ");
        scanf("%d", &choix_menu);
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
                rechercher();
                break;
            case 6:
                counte();
                break;
            case 7:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                break;
        }
    } while (choix_menu > 0 && choix_menu <= 6);

    return 0;
}
