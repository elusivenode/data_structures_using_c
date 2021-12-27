#include <stdio.h>

int mainMenu();
void q1(), q2();

int main() {

    int userSelection;
    do {
        userSelection = mainMenu();
        switch (userSelection) {
            case 1:
                q1();
                break;
            case 2:
                q2();
                break;
            default:
                printf("You must enter a number from the menu.\n");
        }
    } while (userSelection != 0);

    printf("Goodbye.\n");
    return 0;
}

void q2() {
    printf("\n**********************************************\n");
    printf("Question 2\n");
    printf("**********************************************\n");

    int userInt;
    printf("Please enter an integer number:");
    scanf("%d:", &userInt);

    int totalEvens = 0;
    for (int i = 2; i <= userInt; i += 2) {
        totalEvens += i;
    }

    printf("The sum total of the even numbers between 1 and %d id %d.\n", userInt, totalEvens);

    printf("\n\n");
}

void q1() {
    printf("\n**********************************************\n");
    printf("Question 1\n");
    printf("**********************************************\n");

    int noInts = 10;
    int ints[noInts];
    for (int i = 0; i < noInts; i++) {
        printf("%\tEnter integer number %d\n", i+1);
        scanf("%d", &ints[i]);
    }

    unsigned char delimit;
    for (int i = 0; i < noInts; i++) {
        if (((i + 1) % 3 == 0) || ((i + 1) == noInts)) {
            delimit= 0x0a;
        } else {
            delimit= 0x2c;
        }
        printf("%d%c", ints[i], delimit);
    }
    printf("\n\n");
}

int mainMenu() {
    int userSelection;

    printf("Select a question number:\n");
    printf("0:\tQUIT\n");
    printf("1:\tPrint integers\n");
    printf("2:\tSum even numbers between 1 and x\n");
    scanf("%d", &userSelection);
    return userSelection;
}