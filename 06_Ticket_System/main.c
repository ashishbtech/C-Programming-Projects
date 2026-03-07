#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

void displaySeats(char seats[ROWS][COLS]) {
    printf("\n--- Screen is this way ---\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("[%c] ", seats[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------\n");
}

int main() {
    char seats[ROWS][COLS];
    int choice, row, col;

    // Initialize all seats as 'O' (Open)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'O';
        }
    }

    while (1) {
        printf("\n🍿 Welcome to the Cinema!\n");
        printf("1. View Available Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displaySeats(seats);
        } else if (choice == 2) {
            printf("Enter row (0-4) and column (0-4) to book: ");
            scanf("%d %d", &row, &col);

            if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
                if (seats[row][col] == 'X') {
                    printf("❌ Sorry, that seat is already taken!\n");
                } else {
                    seats[row][col] = 'X';
                    printf("✅ Seat [%d][%d] booked successfully!\n", row, col);
                }
            } else {
                printf("❌ Invalid seat location.\n");
            }
        } else if (choice == 3) {
            printf("Enjoy the movie!\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}