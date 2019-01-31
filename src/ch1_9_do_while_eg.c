#include <stdio.h>

int main(void) {
    int n, i = 0, sum = 0;
    float avg = 0.0;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    do {
        sum += i;
        i++;
    } while (i <= n);
    avg = (float)sum / n;

    printf("\nThe sum of the first %d numbers is %d", n, sum);
    printf("\nThe average of the first %d numbers is %.2f\n\n", n, avg);

    return  0;
}