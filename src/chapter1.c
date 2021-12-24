#include <stdio.h>

int mainMenu();

int main() {

    int userSelection;
    do {
        userSelection = mainMenu();
    } while (userSelection != 0);

    printf("Goodbye.\n");
    return 0;
}

int mainMenu() {
    int userSelection;

    printf("Select a question number:\n");
    printf("0:\tQUIT\n");
    scanf("%d", &userSelection);
    return userSelection;
}