#include <stdio.h>

int main() {

    int nombre_total_departements , nombre_employe , somme = 0 ;
    float salaire , salaire_total = 0;

    printf("veuillez entre nombre total departement :");
    scanf("%d",&nombre_total_departements);

    for (int i = 1; i <= nombre_total_departements; i++) {
        printf("entre le nombre employes :");
        scanf("%d",&nombre_employe);

        for (int j = 1; j <= nombre_employe; j++) {
            printf("entre le salaire de chaque employes %d :",j);
            scanf("%f",&salaire);
            somme += salaire ;

        }
        printf("le salaire de departement %d est : %d \n",i,somme);
        salaire_total += somme ;
        somme = 0 ;
    }

    printf("la masse salariale de toutes entreprise est : %.2f",salaire_total);

    return 0;
}
