#include <stdio.h>

int main() {
    char name[] = "Jocel I. Jalalon";   
    char id[] = "2025306318";           
    int num1, num2, sum;

    printf("Name: %s\n", name);
    printf("ID Number: %s\n", id);
    printf("------------------------------\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Result: The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}