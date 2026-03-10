#include <stdio.h>
#include <string.h>


struct Shinobi {
    char name[30];
    char village[20];
    int powerLevel;
};

int main() {
    
    struct Shinobi roster[9] = {
        {"Naruto Uzumaki", "Hidden Leaf", 9500},
        {"Gaara", "Hidden Sand", 8800},
        {"Sasuke Uchiha", "Hidden Leaf", 9400},
        {"Kakashi Hatake", "Hidden Leaf", 8500},
        {"Killer Bee", "Hidden Cloud", 9000},
        {"Minato Namikaze", "Hidden Leaf", 9600},
        {"Jiraiya", "Hidden Leaf", 9200},
        {"Orochimaru", "Hidden Sound", 9300},
        {"Tsunade Senju", "Hidden Leaf", 9100}
    };
    
    struct Shinobi temp;
    int n = 9;

    printf("Sorting Shinobi Database by Power Level...\n\n");

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (roster[j].powerLevel < roster[j + 1].powerLevel) {
                
                temp = roster[j];
                roster[j] = roster[j + 1];
                roster[j + 1] = temp;
            }
        }
    }

    
    printf("Top Strongest Shinobi Roster:\n");
    printf("--------------------------------------------------\n");
    printf("%-5s | %-20s | %-15s | %-10s\n", "Rank", "Name", "Village", "Power");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("#%-4d | %-20s | %-15s | %-10d\n", i + 1, roster[i].name, roster[i].village, roster[i].powerLevel);
    }
    printf("--------------------------------------------------\n");

    return 0;
}