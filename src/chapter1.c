#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int mainMenu();
void q1(), q2(), q3(), q4();

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
            case 3:
                q3();
                break;
            case 4:
                q4();
                break;
            default:
                printf("You must enter a number from the menu.\n");
        }
    } while (userSelection != 0);

    printf("Goodbye.\n");
    return 0;
}

int mainMenu() {
    int userSelection;

    printf("Select a question number:\n");
    printf("0:\tQUIT\n");
    printf("1:\tPrint integers\n");
    printf("2:\tSum even numbers between 1 and x\n");
    printf("3:\tCount the number of vowels\n");
    printf("4:\tPrint address\n");
    scanf("%d", &userSelection);
    return userSelection;
}

void  q4() {
    printf("\n**********************************************\n");
    printf("Question 3\n");
    printf("**********************************************\n\n");

    printf("Dear user, please enter you name and address (with , separators and . terminator)\n");
    unsigned int len_max = 128;
    unsigned int current_size = 0;

    char *pStr = malloc(len_max);
    current_size = len_max;

    printf("\nPlease enter one line of text ended with a } (can be of arbitrary length): ");

    if(pStr != NULL)
    {
        int c;
        unsigned int i = 0;
        //accept user input until hit enter or end of file
        do {
            c = getchar();
            pStr[i++]=c;

            //if i reached maximize size then realloc size
            if(i == current_size)
            {
                current_size = i+len_max;
                pStr = realloc(pStr, current_size);
            }
        } while (c != '.' && c != EOF);

        pStr[i-1] = '\0';

        int startOfLine = 0;
        for (i = 0; i < strlen(pStr); i++) {
            if (pStr[i] == ',') {
                printf("\n");
                startOfLine = 1;
                continue;
            } else if ((pStr[i] == ' ') && (startOfLine == 1)) {
                startOfLine = 0;
                continue;
            } else {
               printf("%c", pStr[i]);
            }
        }
        //free the memory
        free(pStr);
        pStr = NULL;
    }

    printf("\n\n");
}

void q3() {
    printf("\n**********************************************\n");
    printf("Question 3\n");
    printf("**********************************************\n\n");


    unsigned int len_max = 128;
    unsigned int current_size = 0;

    char *pStr = malloc(len_max);
    current_size = len_max;

    printf("\nPlease enter one line of text ended with a } (can be of arbitrary length): ");

    if(pStr != NULL)
    {
        int c;
        unsigned int i = 0;
        //accept user input until hit enter or end of file
        do {
            c = getchar();
            pStr[i++]=c;

            //if i reached maximize size then realloc size
            if(i == current_size)
            {
                current_size = i+len_max;
                pStr = realloc(pStr, current_size);
            }
        } while (c != '}' && c != EOF);

        pStr[i-1] = '\0';

        int vowels = 0;
        for (i = 0; i < strlen(pStr); i++) {
            switch (pStr[i]) {
                case 'A':
                case 'a':
                case 'E':
                case 'e':
                case 'I':
                case 'i':
                case 'O':
                case 'o':
                case 'U':
                case 'u':
                    vowels++;
            }
        }
        printf("\nThe string entered was: %s\n",pStr);
        printf("This string contains %d vowels.\n", vowels);
        //free the memory
        free(pStr);
        pStr = NULL;
    }

    printf("\n\n");
}

void q2() {
    printf("\n**********************************************\n");
    printf("Question 2\n");
    printf("**********************************************\n\n");

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
    printf("**********************************************\n\n");

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