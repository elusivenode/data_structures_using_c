#include <stdio.h>

void add(int);

int main(void) {
    int num = 2;

    printf("\nThe value of num before calling the function is %d.", num);
    add(num);
    printf("\nThe value of num after calling the function is %d.\n\n", num);

    return 0;
}

void add(int n) {
    n += 10;
    printf("\nThe value of num within the called the function is %d.", n);
}