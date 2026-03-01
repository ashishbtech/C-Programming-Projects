#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define movie structure
typedef struct {
    char title[100];
    int year;
    float rating;
} Movie;

int main() {
    Movie myMovie;
    FILE *file;

    printf("🍿 === CLI Movie Watchlist === 🍿\n");

    // Get movie details from user
    printf("Enter the movie title: ");
    fgets(myMovie.title, 100, stdin);
    myMovie.title[strcspn(myMovie.title, "\n")] = 0; // strip the trailing newline from fgets

    printf("Enter the release year: ");
    scanf("%d", &myMovie.year);

    printf("Enter your rating (out of 5.0): ");
    scanf("%f", &myMovie.rating);

    // Open database in append mode to preserve old entries
    file = fopen("watchlist.txt", "a");

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1; 
    }

    // Write entry to file and cleanup
    fprintf(file, "Title: %s | Year: %d | Rating: %.1f/5.0\n", myMovie.title, myMovie.year, myMovie.rating);
    fclose(file);

    printf("\n✅ Successfully saved '%s' to your watchlist.txt!\n", myMovie.title);
    printf("=================================\n");

    return 0;
}