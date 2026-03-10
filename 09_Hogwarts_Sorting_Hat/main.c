#include <stdio.h>

int main() {
    int answer, g = 0, s = 0, r = 0, h = 0;

    printf("Welcome to Hogwarts! The Sorting Hat is ready.\n\n");

    printf("Q1: You face a troll in the dungeon. What do you do?\n");
    printf("1. Attack it head-on with a spell!\n");
    printf("2. Sneak past it using a clever distraction.\n");
    printf("3. Analyze its weaknesses from a safe distance.\n");
    printf("4. Alert a teacher to protect your friends.\n");
    printf("Choice (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 1) g++; 
    else if (answer == 2) s++; 
    else if (answer == 3) r++; 
    else h++;

    printf("\nQ2: What kind of legacy do you want to leave behind?\n");
    printf("1. A hero's tale of bravery.\n");
    printf("2. A legacy of power and greatness.\n");
    printf("3. A history of brilliant discoveries.\n");
    printf("4. Memories of kindness and loyalty.\n");
    printf("Choice (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 1) g++; 
    else if (answer == 2) s++; 
    else if (answer == 3) r++; 
    else h++;

    printf("\nQ3: Which path do you choose in a dark forest?\n");
    printf("1. The path that sounds like battle.\n");
    printf("2. The path that looks like it hides treasure.\n");
    printf("3. The path filled with mysterious, glowing plants.\n");
    printf("4. The safest path back to the castle.\n");
    printf("Choice (1-4): ");
    scanf("%d", &answer);
    
    if (answer == 1) g++; 
    else if (answer == 2) s++; 
    else if (answer == 3) r++; 
    else h++;

    printf("\nCalculating your house...\n");
    printf("The Hat Shouts: ");

    // Logic to determine the house with the highest score
    if (g >= s && g >= r && g >= h) {
        printf("GRYFFINDOR!\n");
    } else if (s >= g && s >= r && s >= h) {
        printf("SLYTHERIN!\n");
    } else if (r >= g && r >= s && r >= h) {
        printf("RAVENCLAW!\n");
    } else {
        printf("HUFFLEPUFF!\n");
    }

    return 0;
}