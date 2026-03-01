#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random year between 1990 and 2025
    // rand() % 36 gives a number from 0 to 35. Adding 1990 shifts it to 1990-2025.
    int targetYear = (rand() % 36) + 1990; 
    int guess;
    int attempts = 5;
    int won = 0;

    printf("🎬 === The Cinephile's Time Machine === 🎬\n");
    printf("I have selected a secret movie release year between 1990 and 2025.\n");
    printf("You have %d attempts to guess it. Good luck!\n\n", attempts);

    // The Game Loop
    while (attempts > 0) {
        printf("Enter your guess (Attempts left: %d): ", attempts);
        scanf("%d", &guess);

        if (guess == targetYear) {
            printf("\n🎉 BULLSEYE! You guessed the correct year: %d!\n", targetYear);
            won = 1; // Mark as won
            break;   // Exit the loop early since they won
        } else if (guess < targetYear) {
            printf("❌ Too low! The movie came out later than that.\n\n");
        } else {
            printf("❌ Too high! The movie came out earlier than that.\n\n");
        }

        attempts--; // Subtract one attempt
    }

    // Check if they lost
    if (won == 0) {
        printf("\n💀 Out of attempts! The secret release year was %d.\n", targetYear);
        printf("Time to watch some more movies and try again!\n");
    }

    printf("==========================================\n");
    return 0;
}