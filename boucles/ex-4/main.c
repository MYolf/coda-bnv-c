#include <stdio.h>

int main() {
int num;
printf("Enter a number autre que 0 : ");
scanf("%d", &num);
int number = 0;
while (number < num) {
    printf("%d\n", number);
    number = number + 1;
}
}