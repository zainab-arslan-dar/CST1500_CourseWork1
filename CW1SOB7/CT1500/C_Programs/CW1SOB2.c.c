#include <stdio.h>
int main() {
   char name[50];   // stores the user name
    float num1, num2;

    printf("Enter your name: ");
    scanf("%s", name);

    // Get two numbers from the user
    printf("Enter the first value: ");
    scanf("%f", &num1);
    printf("Enter the second value: ");
    scanf("%f", &num2);

    // Performs the calculations
    printf("\nResults:\n");
    printf("%s has entered %.2f and %.2f. %.2f + %.2f = %.2f\n", name, num1, num2, num1, num2, num1 + num2);
    printf("%s has entered %.2f and %.2f. %.2f - %.2f = %.2f\n", name, num1, num2, num1, num2, num1 - num2);
    printf("%s has entered %.2f and %.2f. %.2f * %.2f = %.2f\n", name, num1, num2, num1, num2, num1 * num2);
    printf("%s has entered %.2f and %.2f. %.2f / %.2f = %.2f\n", name, num1, num2, num1, num2, num1 / num2);
   
    return 0;
}
