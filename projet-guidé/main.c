#include <stdio.h>
#include <stdlib.h>

int main() {
    char operateurs;
    int n1;
    int n2;
    double resultat;
    char prenom[100];
    printf("\nQuel est ton prénom ? : ");
    scanf("%s", prenom);
    printf("\nBonjour %s, bienvenu sur la calculatrice !", prenom);
    printf("\n\nChoisit ton premier nombre : ");
    scanf("%d", &n1);
    printf("\nChoisi ton operateur ( -, +, /, *, %% ) : ");
    scanf(" %c", &operateurs);
    if (operateurs == '+') {
        printf("\nPar quoi veux tu additonné %d ? : ", n1);
        scanf("%d", &n2);
        double resultat = n1 + n2;
        printf("\nLe résultat de %d + %d = %.2f \n\n", n1, n2, resultat);
    }
    else if (operateurs == '-') {
        printf("\nPar quoi veux tu soustraire %d ? : ", n1);
        scanf(" %d", &n2);
        double resultat = n1 - n2;
        printf("\nLe résultat de %d - %d = %.2f \n\n", n1, n2, resultat);
    }
    else if (operateurs == '*') {
        printf("\nPar quoi veux tu multiplier %d ? : ", n1);
        scanf(" %d", &n2);
        double resultat = n1 * n2;
        printf("\nLe résultat de %d * %d = %.2f \n\n", n1, n2, resultat);
    }
    else if (operateurs == '/') {
        printf("\nPar quoi veux tu diviser %d ? : ", n1);
        scanf(" %d", &n2);
        double resultat = n1 / n2;
        printf("\nLe résultat de %d / %d = %.2f \n\n", n1, n2, resultat);
    }
    else if (operateurs == '%') {
        printf("\nQuel modulo veux tu pour %d ? : ", n1);
        scanf(" %d", &n2);
        double resultat = n1 % n2;
        printf("\nLe résultat de %d %% %d = %.2f \n\n", n1, n2, resultat);
    }
    else {
        printf("\nL'operateur %c, n'est pas reconnu !\n\n", operateurs);
    }
}