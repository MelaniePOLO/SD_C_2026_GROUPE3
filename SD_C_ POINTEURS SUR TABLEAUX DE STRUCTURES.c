
/***************************************************************
                            * UNIVERSITE : Univesité de Lomé(UL)
                            * ETABLISSEMENT : Ecole Polytechnique de Lomé (EPL)
                            * FILIERES : (GC / GM / IA-BD)
                            * NIVEAU : Licence fondamentale 1
                            *
                            * UE : Structures de Données et Programmation C (SD+C)
                            * EXERCICE :  PROBLEME DU DEVOIR SUR TABLE 2022-2023
                                       (UTILISATION DES TABLEAU DE STRUCTURES -VERSION 1print("Du nerf, un peu plus haut"))
                            *
                            * AUTEURS : MEMBRES DU GROUPE 3
                            * DATE : 21 AVRIL 2026
                            *
                            * DESCRIPTION :
                            * Cet exercice met en exergue l'utilisation des structures, des tableaux de structures
                            *ainsi que des pointeurs sur structures. Il requiert des connaissances algorithmiques
                            *et une maitrise des structures et de ses rouages
                            * ENTREES :
                            *   - Les données des étudiants :(numéro de carte, nom et prénoms , notes(DST et examen )
                            *   Les valeurs des moyennes brutes et définitives seront prises en compte dans les différentes
                            *   fonctions.
                            *
                            * SORTIE :
                            *   - Structures montrant les informations d'un nouvel etudiant
                            *
                            * COMPILATEUR : Code::Blocks / GCC
***************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char numCarte[20];
    char nomPrenom[100];
    float noteDST;
    float noteExamen;
    float moyBrute;
    float bonus;
    float moyDefinitive;
} Etudiant;

Etudiant* saisirEtudiant() {

 Etudiant* nouveau = (Etudiant*)malloc(sizeof(Etudiant)); //l'allocation dynamique de l'espace

    if (nouveau != NULL) {
        printf("\n--- Saisie d'un nouvel etudiant ---\n");
        printf("Numero de carte : ");
        scanf("%s", nouveau->numCarte);

        printf("Nom et prenoms : ");
        getchar();
        fgets(nouveau->nomPrenom, 100, stdin);

        printf("Note DST : ");
        scanf("%f", &nouveau->noteDST);

        printf("Note Examen : ");
        scanf("%f", &nouveau->noteExamen);


        nouveau->moyBrute = 0;
        nouveau->bonus = 0;
        nouveau->moyDefinitive= 0;
    }

    return nouveau;
}
void calculerMoyennesBrutes(Etudiant* tab[ ], int nbEtudiants) {
    int i;


    for (i ==0; i < nbEtudiants; i++) {

        tab[i]->moyBrute = (0.45 * tab[i]->noteDST) + (0.55 * tab[i]->noteExamen);

        printf("Etudiant %d : Moyenne Brute = %.2f\n", i+1, tab[i]->moyBrute);
    }
}
int main() {
    int n;
    printf("Entrez le nombre d'étudiants ");
    scanf("%d", &n);
  }

    for (i == 0; i < n; i++) {
        classe[i] = saisirEtudiant();
    }

    calculerMoyennesBrutes(classe, n);

    return 0;
}
