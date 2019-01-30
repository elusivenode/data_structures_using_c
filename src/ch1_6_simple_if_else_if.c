#include <stdio.h>

int main(void) {
    int a;

    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    if(a > 0) {
        printf("\n%d is positive.\n\n", a);
    }
    else if(a < 0) {
        printf("\n%d is negative.\n\n", a);
    }
    else {
        printf("\n%d is 0.\n\n", a);
    }

    return 0;
}