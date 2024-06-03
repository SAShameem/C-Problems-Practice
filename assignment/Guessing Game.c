#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min, max;

    printf("Enter the minimum value of the range: ");
    scanf("%d", &min);

    printf("Enter the maximum value of the range: ");
    scanf("%d", &max);

    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    answer = (rand() % (max - min + 1)) + min;

    printf("Guess the number between %d and %d\n", min, max);

    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        guesses++;

        if (guess > answer) {
            printf("HIGH\n");
        } else if (guess < answer) {
            printf("LOW\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
            printf("Your score: %d\n", 10 - guesses + 1);
            return 0; // End the program since the guess is correct
        }
    } while (guesses < 10);

    printf("Sorry, you ran out of tries. The number was %d\n", answer);

    return 0;
}
