#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;
    printf("Choississez un nombre entre 0 et 100 : ");
    scanf("%d", &num);
    if (num > 0 && num <= 100) {
        int multiple = 0;
        while (multiple < num) {
            multiple = multiple + 5;
            printf("%d\n", multiple);
        }
    }
    
}