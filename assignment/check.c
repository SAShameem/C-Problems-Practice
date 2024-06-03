#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

// Function to display prime number pairs whose sum equals the given even number
void displayPrimePairs(int evenNumber) {
    printf("Prime number pairs whose sum is %d:\n", evenNumber);

    for (int i = 2; i <= evenNumber / 2; i++) {
        if (isPrime(i) && isPrime(evenNumber - i)) {
            printf("(%d, %d)\n", i, evenNumber - i);
        }
    }
}

int main() {
    int evenNumber;

    printf("Enter a positive even number greater than 2: ");
    scanf("%d", &evenNumber);

    if (evenNumber <= 2 || evenNumber % 2 != 0) {
        printf("Invalid input! Please enter a positive even number greater than 2.\n");
        return 1;
    }

    displayPrimePairs(evenNumber);

    return 0;
}
