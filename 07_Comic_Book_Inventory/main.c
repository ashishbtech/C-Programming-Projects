#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Comic {
    char title[50];
    char publisher[20];
    float price;
};


void addComic() {
    FILE *file = fopen("comics.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    struct Comic c;

    printf("\nEnter Comic Title: ");
    scanf(" %[^\n]s", c.title); 
    
    printf("Enter Publisher (Marvel/DC/etc): ");
    scanf(" %[^\n]s", c.publisher);
    
    printf("Enter Price (in INR): ");
    scanf("%f", &c.price);

    
    fprintf(file, "Title: %s | Publisher: %s | Price: Rs. %.2f\n", c.title, c.publisher, c.price);
    
    fclose(file);
    printf("Comic added to inventory!\n");
}


void viewComics() {
    FILE *file = fopen("comics.txt", "r");
    char line[150];

    if (file == NULL) {
        printf("\nInventory is empty or file not found.\n");
        return;
    }

    printf("\nCurrent Inventory:\n");
    printf("--------------------------------------------------\n");
    
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    
    printf("--------------------------------------------------\n");
    fclose(file);
}

int main() {
    int choice;
    
    while (1) {
        printf("\nComic Store Manager\n");
        printf("1. Add Comic\n");
        printf("2. View Inventory\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addComic();
        } else if (choice == 2) {
            viewComics();
        } else if (choice == 3) {
            printf("Exiting... Excelsior!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}