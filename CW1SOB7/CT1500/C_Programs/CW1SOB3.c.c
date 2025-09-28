#include <stdio.h>
int main() {
    int num1;
    while (1) {
    printf("Enter the score (-1 to stop): "); // Prompt user for score input
    scanf("%d", &num1); // Input stored as integer
    if (num1 == -1) {
        break;
    }
    printf("\nAcademic Performance:\n");
    // Grading scale with descriptions
    if (num1 >= 70 && num1 <= 100) {
        printf("Your exam score is %d which is FIRST\n", num1); 
    }
    else if (num1 >= 60 && num1 <= 69) { 
        printf("Your exam score is %d which is UPPER SECOND\n", num1);
    }
    else if (num1 >= 50 && num1 <= 59) {
        printf("Your exam score is %d which is LOWER SECOND\n", num1);
    }
    else if (num1 >= 40 && num1 <= 49) {
        printf("Your exam score is %d which is THIRD\n", num1);
    }
    else if (num1 >= 0 && num1 <= 39) {
        printf("Your exam score is %d which is FAIL\n", num1);
    }
   
}
    return 0;
}
