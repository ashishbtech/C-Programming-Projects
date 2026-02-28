#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int choice, number, max, attempts, min = 1, chances, guess;

    srand(time(NULL));

    do
    {
        printf("--Welcome to the Guessing Number Game--\n");
        printf(" 1 for Easy(1 to 50, 7 chances)\n");
        printf(" 2 for Medium(1 to 100, 5 chances)\n");
        printf(" 3 for Hard(1 to 200, 3 chances)\n");
        printf(" 4 for exit!!\n");
        printf("Choose the Difficulty level: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            max = 50, chances = 7;
            break;

        case 2:
            max = 100, chances = 5;
            break;

        case 3:
            max = 200, chances = 3;
            break;

        case 4:
            printf("Exiting the Game!! and see you again, DATTEBAYO!!!\n");
            continue;

        default:
            printf("Invalid Choice!! Please try agian.\n");
            continue;
        }

        number = (rand() % max) + 1;
        attempts = 0;

        printf("\nI have chosen a number from %d to %d.\n", min, max);
        printf("You have %d chances: \n", chances);

        while (attempts < chances)
        {
            printf("\nPlease enter your guess (Or -1 to Quit):");
            scanf("%d", &guess);

            if (guess == -1)
            {
                printf("You are quiting tthe game! Your number was %d.\n", number);
                break;
            }

            attempts++;

            if (guess == number)
            {
                printf("🎉 Correct! The number was %d. You got it in %d attempts!\n", number, attempts);
            }
            else if (guess < number)
            {
                printf(" Too low! Try again.\n");
            }
            else
            {
                printf(" Too high!! Try again.\n");
            }

            if (attempts == chances && guess != number)
            {
                printf("Game Over!! You ran out of chances. The number was %d.\n", number);
            }
        }

    } while (choice != 4);

    return 0;
}