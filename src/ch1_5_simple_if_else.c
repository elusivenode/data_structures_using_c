#include <stdio.h>

int main(void) {
    int x;

    printf("\nEnter an integer: ");
    scanf("%d", &x);
    if (x>0) {
        printf("\n%d is greater than 0.\n\n", x);
    }
    else {
        printf("\n%d is not greater than 0.\n\n", x);
    }


    return 0;
}