#include <stdio.h>

int main()
{
    char mot[20];
    printf("Enter un mot : ");
    scanf("%s", mot);
    
        int count = 0;
        while (count < 5)
        {
            int number = count + 1;
            printf("%d : %s\n", number, mot);
            count = count + 1;
        }
    
}