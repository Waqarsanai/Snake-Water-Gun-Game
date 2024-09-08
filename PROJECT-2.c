#include <stdio.h>
#include <stdlib.h>

    char getComputerChoice() {
        int random = rand() % 3;
        return (random == 0) ? 's' : (random == 1) ? 'w' : 'g';
    }

    char getResult(char you, char comp) {
        if (you == comp) return 'd';
        if ((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's')) 
            return 'w';
        return 'l';
    }

    int isValidChoice(char choice) {
        return (choice == 's' || choice == 'w' || choice == 'g');
    }

    int main() {
        char you, comp;

        rand();
        comp = getComputerChoice();

        do {
            printf("Enter 's' for Snake, 'w' for Water, 'g' for Gun: ");
            scanf(" %c", &you);
            if (!isValidChoice(you)) {
                printf("Invalid input. Please try again.\n");
            }
        } while (!isValidChoice(you));

        printf("You chose: %c, Computer chose: %c\n", you, comp);

        char result = getResult(you, comp);

        if (result == 'd') printf("It's a draw!\n");
        else if (result == 'w') printf("You win!\n");
        else printf("You lose!\n");

        return 0;
    }
