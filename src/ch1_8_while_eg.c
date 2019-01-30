#include <stdio.h>

int main(void) {
    long m, n, i, sum = 0;

    printf("\nEnter an integer: ");
    scanf("%ld", &m);
    printf("\nEnter a larger integer: ");
    scanf("%ld", &n);

    i = m;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("\nThe sum of the numbers from %ld to %ld inclusive equals %ld.\n\n", m, n, sum);

    return 0;
}