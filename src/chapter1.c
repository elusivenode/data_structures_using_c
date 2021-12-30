#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int mainMenu();
void q1(), q2(), q3(), q4(), q5(), q6(), q7();
void breakUpInts(int *, int, int);
int noOfDigits(int);

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
            case 5:
                q5();
                break;
            case 6:
                q6();
                break;
            case 7:
                q7();
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
    printf("5:\tAdd to floats and store in int\n");
    printf("6:\tAccess the parts of a float\n");
    printf("7:\tCalculate simple and compound interest\n");
    scanf("%d", &userSelection);
    return userSelection;
}

void  q7() {
    printf("\n**********************************************\n");
    printf("Question 7\n");
    printf("**********************************************\n\n");

    double years, rate, principal, simpleinterest, compinterest, comprate;
    int noDays;
    printf("This will program will calculate interest payable - both simple and compound.\n\n");
    printf("Enter a loan principal amount: ");
    scanf("%lf", &principal);
    printf("Enter an interest rate (eg. 4.05 for 4.05%): ");
    scanf("%lf", &rate);
    printf("Enter a loan period in years (eg. 0.5 for 6 months): ");
    scanf("%lf", &years);

    simpleinterest = principal * rate / 100 * years;
    noDays = years * 365;

    comprate = pow(1 + rate/(100.0 * 365.0), (double)noDays) - 1;
    compinterest = principal * comprate;

    printf("\nLoan details: principal $%.2lf\tinterest rate %.2lf%\tterm %.1lf years\n", principal, rate, years);
    printf("Simple interest payable:\t\t$%8.2lf\n", simpleinterest);
    printf("Compound interest payable:\t\t$%8.2lf\n", compinterest);
    printf("Simple interest rate for the period:\t\t%8.2lf%\n", rate * years);
    printf("Compound interest rate for the period:\t\t%8.2lf%\n", comprate * 100);

    printf("\n**********************************************\n");
}

void  q6() {
    printf("\n**********************************************\n");
    printf("Question 6\n");
    printf("**********************************************\n\n");

    double flt, fractional, integral;

    printf("Please enter a floating point number: ");
    scanf("%lf", &flt);
    printf("You entered %lf\n", flt);
    fractional = modf(flt, &integral);
    printf("That float has integral component %lf and fractional component %lf\n", integral, fractional);

    int ndigs = 0;
    ndigs = noOfDigits(integral);
    int ints[ndigs];

    breakUpInts(ints, ndigs, integral);
    printf("The integral component is made up of the following digits from least to most significant:\n");
    for(int i = 0; i < ndigs; i++) {
        printf("\t%d", ints[i]);
    }
    printf("\n**********************************************\n");
}

int noOfDigits(int val) {
    int ct = 1;
    while(val/=10) ct++;
    return ct;
}

void breakUpInts(int * ints, int ndigs, int val) {
    for(int i = 0; i < ndigs; i++) {
        ints[i] = (val%10);
        val/=10;
    }
}

void  q5() {
    printf("\n**********************************************\n");
    printf("Question 5\n");
    printf("**********************************************\n\n");

    float f1, f2;
    int sum;

    printf("Please enter 2 floating point numbers: ");
    scanf("%f %f", &f1, &f2);
    printf("\nYou entered %f1 and %f2\n", f1, f2);
    sum = f1 + f2;
    printf("There sum stored in an int is %d\n", sum);

    printf("\n**********************************************\n");
}

void  q4() {
    printf("\n**********************************************\n");
    printf("Question 4\n");
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

    printf("\n**********************************************\n");
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

    printf("\n**********************************************\n");
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

    printf("\n**********************************************\n");
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
    printf("\n**********************************************\n");
}