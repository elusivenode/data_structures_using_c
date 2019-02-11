#include <stdio.h>

int main(void) {
    int num, *pnum;

    pnum = &num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nThe number that was entered is: %d.\n\n", *pnum);

    return 0;
}