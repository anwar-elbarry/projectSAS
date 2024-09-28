#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    // variables pour oops et pour le choix & conteur
    int i, j, nbr_livres = 0, n;
    // le maximum des livres
    int max_string = 100, max_char = 25;
    // les tableux
    char titre[max_string][max_char], auteur[max_string][max_char];
    int prix[100], quantite[100];
    // le titre de livres
    char searcher[max_char];
    // pour l'affictation
    char tempt_char[max_char];
    int tempt_int;

    // le programe
    do
    {
        // variable pour search
        int present = 0;
        // menu
        printf("**********************MENU*Librairie******************\n");
        printf("*                                                    *\n");
        printf("*     1-Ajouter un livre au stock.                   *\n");
        printf("*     2-Afficher tous les livres disponibles.        *\n");
        printf("*     3-Rechercher un livre par son titre.           *\n");
        printf("*     4-Mettre a jour la quantite d'un livre.        *\n");
        printf("*     5-Supprimer un livre du stock.                 *\n");
        printf("*     6-Afficher le nombre total de livres en stock. *\n");
        printf("*     7-quitter                                      *\n");
        printf("*                                                    *\n");
        printf("******************************************************\n");
        printf("\n");
        // le choix/
        printf("choiser un nombre entre(1 et 7):");
        scanf("%d", &n);
        // les choix
        switch (n)
        {
        case 1:
if (nbr_livres < max_string){
            printf("titre:");
            getchar(); // pour supprimer buffer
            fgets(titre[nbr_livres], max_char, stdin);
            titre[nbr_livres][strcspn(titre[nbr_livres], "\n")] = 0; // from chatgpt for buffer solution

            printf("auteur:");
            fgets(auteur[nbr_livres], max_char, stdin);
            auteur[nbr_livres][strcspn(auteur[nbr_livres], "\n")] = 0;

            printf("prix:");
            scanf("%d", &prix[nbr_livres]);

            printf("quantite:");
            scanf("%d", &quantite[nbr_livres]);

            nbr_livres++;
                           }
             else {
        printf("Le stock est plein.\n");
    }
            printf("\n");
            break;
        case 2:
            for (i = 0; i < nbr_livres; i++)
            {

                printf("-------------------livre N%d-------------------\n", i + 1);
                printf("Titre du livre: %s\n", titre[i]);
                printf("Auteur du livre: %s\n", auteur[i]);
                printf("Prix du livre: %d DH\n", prix[i]);
                printf("Quantité en stock: %d \n", quantite[i]);
                printf("-----------------------------------------------\n");

                printf("\n");
                printf("\n");
            }
            if (nbr_livres == 0)
                printf("le stock est vide\n");
            printf("\n");
            break;
        case 3:
            if(nbr_livres!=0){
            printf("le titre du livre que vous souhaitez rechercher:");
            getchar();

            fgets(searcher, max_char, stdin);
            searcher[strcspn(searcher, "\n")] = 0;

            for (i = 0; i <= nbr_livres; i++)
            {

                int compare = strcmp(titre[i], searcher); // la comparaison

                if (compare == 0)
                {
                    printf("Titre du livre: %s\n", titre[i]);
                    printf("Auteur du livre: %s\n", auteur[i]);
                    printf("Prix du livre: %d \n", prix[i]);
                    printf("Quantité en stock: %d \n", quantite[i]);
                    present++;//pour la presence de livre
                }
            }
            if (present == 0)
                printf("le livre %s n'existe pas \n", searcher);
            }
            else{
                printf("le stock est vide\n");
            }
            printf("\n");
            break;
        case 4:
            if (nbr_livres != 0)
            {
                printf("le titre du livre que vous souhaitez modifier:");
                getchar();
                fgets(searcher, max_char, stdin);
                searcher[strcspn(searcher, "\n")] = 0;
                for (i = 0; i <= nbr_livres; i++)
                {
                    int compare = strcmp(titre[i], searcher);
                    if (compare == 0)
                    {
                        printf("nouvelle Titre Quantité en stock:");
                        scanf("%d",&quantite[i]);
                        printf("la quantite est modifiable avec succes");
                        present++;//pour la presence de livre

                    }
                }
                if (present == 0)
                    printf("le livre %s n'existe pas \n", searcher);
            }
            else
            {
                printf("pas de livre a mettre à jour\n");
            }

            printf("\n");
            break;
        case 5:
            if (nbr_livres != 0)
            {
                printf("le titre du livre que vous souhaitez Supprimer:");
                getchar();
                fgets(searcher, max_char, stdin);
                searcher[strcspn(searcher, "\n")] = 0;
                for (i = 0; i <= nbr_livres; i++)
                {
                    int compare = strcmp(titre[i], searcher);
                    if (compare == 0)
                    {
                        for (j = i; j < nbr_livres - 1; j++)
                        {
                            // replace titre
                            strcpy(titre[j], titre[j + 1]);
                            // replace auteur
                            strcpy(auteur[j], auteur[j + 1]);
                            // replace prix
                            prix[j] = prix[j + 1];
                            // replace quantite
                            quantite[j] = quantite[j + 1];
                        }
                        printf("Livre supprime avec succes.\n");
                        nbr_livres--;//pour l'affichage
                        present++;//pour la presence de livre
                        break;
                    }
                }
                if (present == 0)
                    printf("le livre %s n'existe pas \n", searcher);
            }
            else
            {
                printf("pas de livre a supprimer\n");
            }
            printf("\n");
            break;
        case 6:
            printf("le nombre total de livres en stock :%d\n", nbr_livres);
            printf("\n");
            break;
        case 7:
            printf("au revoir !");
            break;
        }

    } while (n >= 1 && n < 7);
    return 0;
}
