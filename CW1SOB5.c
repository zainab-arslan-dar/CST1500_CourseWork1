#include <stdio.h>

int main()
{
    int num1, num2;
    int *pointer1, *pointer2; // Pointers for the two numbers

    pointer1 = &num1; // Assigning the address of num1 to pointer1
    pointer2 = &num2; // Assigning the address of num2 to pointer2

    // Taking input from user for both numbers using pointers
    printf("Enter the first number: ");
    scanf("%d", pointer1);
    printf("Enter the second number: ");
    scanf("%d", pointer2);

    // Printing the memory addresses of num1 and num2 before calculations
    printf("\nMemory address of num1: %p", (void*)pointer1);
    printf("\nMemory address of num2: %p\n", (void*)pointer2);

    // Performing Mathematical calculations using pointers
    int sum= *pointer1 + *pointer2;
    int difference = *pointer1 - *pointer2;
    int multiplication = *pointer1 * *pointer2;
    float division = (*pointer2 != 0) ? (float)*pointer1 / *pointer2 : 0;

    // Displaying the results
    printf("\nSum: %d", sum);
    printf("\nDifference: %d", difference);
    printf("\nProduct: %d", multiplication);
    if (*pointer2 != 0) {
        printf("\nDivision: %.2f\n", division);
    } else {
        printf("\nQuotient: Error\n");
    }

    // Printing the memory addresses after calculations
    printf("\nMemory address of num1 after calculations: %p", (void*)pointer1);
    printf("\nMemory address of num2 after calculations: %p\n", (void*)pointer2);

    return 0; 
}

