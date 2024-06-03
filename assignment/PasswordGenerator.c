#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void passGen(int n) {
    int i;
    char password[n+1]; // +1 for the null terminator

    char numbers[] = "0123456789";
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char symbols[] = "!@#$^&*?";

    // Ensure that we have at least one of each required character type
    password[0] = LETTERS[rand() % 26];
    password[1] = letters[rand() % 26];
    password[2] = numbers[rand() % 10];
    password[3] = symbols[rand() % 8];

    // Fill the remaining positions with random characters from all categories
    for(i = 4; i < n; i++) {
        int randomizer = rand() % 4;
        if(randomizer == 0) {
            password[i] = LETTERS[rand() % 26];
        } else if(randomizer == 1) {
            password[i] = letters[rand() % 26];
        } else if(randomizer == 2) {
            password[i] = numbers[rand() % 10];
        } else {
            password[i] = symbols[rand() % 8];
        }
    }

 /*   // Shuffle the password to ensure randomness
    for(i = 0; i < n; i++) {
        int j = rand() % n;
        char temp = password[i];
        password[i] = password[j];
        password[j] = temp;
    }
*/
    password[n] = '\0'; // Null-terminate the string

    printf("Generated Password: %s\n", password);
}

int main() {
    int n;
    srand(time(NULL)); // Seed the random number generator

    printf("Enter Password Length: ");
    scanf("%d", &n);

    if (n < 6) {
        printf("Password must be at least 6 characters long.\n");
    } else {
        passGen(n);
    }

    return 0;
}
