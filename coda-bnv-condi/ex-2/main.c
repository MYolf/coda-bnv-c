#include <stdio.h>

int main() 
{
    printf("choisi ton signe : + - * / \n");
    char signe;
    scanf("%c", &signe);
    if (signe == '+') {
        printf("tu as choisit l'addition !\n");
    }
    else if (signe == '-') {
        printf("tu as choisit la soustraction !\n");
    }
    else if (signe == '*') {
        printf("tu as choisit la multiplication !\n");
    }
    else if (signe == '/') {
        printf("tu as choisit la division !\n");
    }
    else {
        printf("tu n'as pas choisi un signe correct !\n");
    }
}