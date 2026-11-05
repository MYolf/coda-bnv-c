#include <stdio.h>

int main() 
{
    char str[100];
    int age;
    printf("Entrez votre prénom : ");
    scanf(" %s", str);
    printf("Bonjour, %s, quel age avez vous ?", str);
    scanf("%d", &age);
    int debut_annee = 2025 - age;
    int fin_annee = 2026 - age;
    printf("%s si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n", str, debut_annee, fin_annee);
    return 0;
}