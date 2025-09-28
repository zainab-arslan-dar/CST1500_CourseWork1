#include <stdio.h>
#include <string.h>

// Print the user's name in the given X times
int printName(int X, char userName[]) {
    for (int i = 0; i < X; i++) {
        printf("%s\n", userName);
    }
    return 0; // Return 0 to indicate success
}

// Password entry
int passwordEntry(char userName[]) {
    char password[20];
    char correctPassword[] = "4404"; // Password
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter your password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0) {
            printf("Success\n");
            printf("Well done %s, you got the password right in %d attempts!\n", userName, attempts + 1);
            return 0; // Return 0 to indicate success
        } else {
            printf("Incorrect password. You have %d attempt(s) left.\n", 2 - attempts);
        }

        attempts++;
    }

    printf("Failure\n");
    printf("Bad luck %s, you took 3 attempts, you are locked out!\n", userName);
    return 0; // Return 0 even if the user is locked out
}

int main() {
    int X;
    char userName[50];

    printf("Enter a whole number (X): ");
    scanf("%d", &X);

    printf("Enter your name: ");
    scanf("%s", userName);

    // Print the user's name X times
    printName(X, userName);

    // Handle password entry
    passwordEntry(userName);

    return 0;
}
