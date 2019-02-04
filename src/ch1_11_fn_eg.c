#include <stdio.h>

int evenodd(int);   //Function declaration

int main(void) {
    int num, flag;

    printf("\nEnter a number: ");
    scanf("%d", &num);
    flag = evenodd(num);
    if(flag == 1) {
        printf("\n%d is EVEN.\n\n", num);
    }
    else {
        printf("\n%d is ODD.\n\n", num);
    }

    return 0;
}

int evenodd(int a) {
    if(a % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}