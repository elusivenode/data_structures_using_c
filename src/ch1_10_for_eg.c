#include <stdio.h>

int main(void) {
    int flag = 0, i, num;

    system("clear");
    printf("\nEnter any number: ");
    scanf("%d", &num);

    for (i = 2; i < num / 2 ; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        printf("\n%d is a composite number.\n\n", num);
    }
    else {
        printf("\n%d is a prime number.\n\n", num);
    }

    return 0;
}