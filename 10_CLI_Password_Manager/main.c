#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(char *pass, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()";
    for (int i = 0; i < length; i++) {
        int key = rand() % (sizeof(charset) - 1);
        pass[i] = charset[key];
    }
    pass[length] = '\0'; 
}

int main() {
    srand(time(0)); 
    char service[50];
    char password[17]; 
    
    printf("--- Secure Password Generator ---\n");
    printf("Enter the website or service name: ");
    scanf("%s", service);

    
    generatePassword(password, 16);
    
    printf("Generated Password: %s\n", password);

    
    FILE *file = fopen("vault.txt", "a");
    if (file != NULL) {
        fprintf(file, "Service: %-15s | Password: %s\n", service, password);
        fclose(file);
        printf("Success: Saved securely to vault.txt\n");
        printf("---------------------------------\n");
    } else {
        printf("Error: Could not open file.\n");
    }

    return 0;
}