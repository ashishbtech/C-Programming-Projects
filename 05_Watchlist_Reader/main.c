#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[255]; 

    printf("🍿 === Your CLI Movie Watchlist === 🍿\n\n");

    // Open database in read-only mode
    file = fopen("watchlist.txt", "r");

    // Prevent crash if database doesn't exist yet
    if (file == NULL) {
        printf("Error: Could not find 'watchlist.txt'.\n");
        printf("Please run the Watchlist tool first to add some movies!\n");
        return 1; 
    }

    // Read and print the file line-by-line until End of File (EOF)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Free memory
    fclose(file);

    printf("\n====================================\n");
    return 0;
}