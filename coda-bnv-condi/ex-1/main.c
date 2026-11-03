#include <stdio.h>

int main() 
{
    int n;
    printf("Entrez votre nombre : \n");
    scanf("%d", &n);
    if(n == 42) {  
        printf("Le nombre est égale à 42\n");
    }
    else if(n < 42) {
        printf("Le nombre est inférieur à 42\n");
    }
    else {
        printf("Le nombre est supérieur à 42\n");
    }
}