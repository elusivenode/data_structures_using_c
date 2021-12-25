#include <stdio.h>

int mainMenu();
void q1();

int main() {

    int userSelection;
    do {
        userSelection = mainMenu();
        switch (userSelection) {
            case 1:
                q1();
        }
    } while (userSelection != 0);

    printf("Goodbye.\n");
    return 0;
}

void q1() {
    int noInts = 10;
    int ints[noInts];
    for (int i = 0; i < noInts; i++) {
        printf("%\tEnter integer number %d\n", i+1);
        scanf("%d", &ints[i]);
    }

    unsigned char delimit;
    for (int i = 0; i < noInts; i++) {
        if ((i + 1) % 3 == 0) || (i + 1) == noInts ) {
            delimit= 0x0a;
        } else {
            delimit= 0x2c;
        }
        printf("%d%c", ints[i], delimit);
    }
}

int mainMenu() {
    int userSelection;

    printf("Select a question number:\n");
    printf("0:\tQUIT\n");
    printf("1:\tPrint integers\n");
    scanf("%d", &userSelection);
    return userSelection;
}