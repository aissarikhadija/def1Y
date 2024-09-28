#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
    char titre[MAX][50];
    char auteur[MAX][50];
    float prix[MAX];
    int quantite[MAX];
    int nombreLivres = 0;
    int choix;

    do {
        printf("\n****** Menu ******\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                if (nombreLivres < MAX) {
                    printf("Entrez le titre du livre: ");
                    scanf(" %s", titre[nombreLivres]);
                    printf("Entrez l'auteur du livre: ");
                    scanf(" %s", auteur[nombreLivres]);
                    printf("Entrez le prix du livre: ");
                    scanf("%f", &prix[nombreLivres]);
                    printf("Entrez la quantité de livres: ");
                    scanf("%d", &quantite[nombreLivres]);
                    nombreLivres++;
                } else {
                    printf("Le stock est plein, impossible d'ajouter un livre.\n");
                }
                break;

            case 2:
                if (nombreLivres == 0) {
                    printf("Aucun livre en stock.\n");
                } else {
                    for (int i = 0; i < nombreLivres; i++) {
                        printf("\nLivre %d: \n", i + 1);
                        printf("Titre: %s \n", titre[i]);
                        printf("Auteur: %s \n", auteur[i]);
                        printf("Prix: %.2f \n", prix[i]);
                        printf("Quantité: %d \n", quantite[i]);
                    }
                }
                break;

            case 3: {
                char titreRecherche[50];
                printf("Entrer le titre du livre à rechercher: ");
                scanf(" %s", titreRecherche);

                int trouve = 0;
                for (int i = 0; i < nombreLivres; i++) {
                    if (strcmp(titreRecherche, titre[i]) == 0) {
                        printf("\nLivre trouvé: \n");
                        printf("Titre: %s\n", titre[i]);
                        printf("Auteur: %s\n", auteur[i]);
                        printf("Prix: %.2f\n", prix[i]);
                        printf("Quantité: %d\n", quantite[i]);
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Livre non trouvé.\n");
                }
                break;
            }

            case 0:
                printf("Quitter...\n");
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choix != 0);

    return 0; 
}
