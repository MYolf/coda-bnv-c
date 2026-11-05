#include <stdio.h>

int main()
{
    char symbol;
    printf("Enter a symbol (+ ou -) : ");
    scanf("%c", &symbol);
    if (symbol == '+')
    {
        int num;
        printf("Enter a number different de 0 : ");
        scanf("%d", &num);
        int number = 0;
        while (number < num)
        {
            printf("%d\n", number);
            number = number + 1;
        }
    }
    else if (symbol == '-') {
        int num;
        printf("Enter a number different de 0 : ");
        scanf("%d", &num);
        while (num >= 0)
        {
            printf("%d\n", num);
            num = num - 1;
        }
    }
}