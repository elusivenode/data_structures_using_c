#include <stdio.h>

int main(void) {
    float f_num;
    int i_num;

    system("clear");
    printf("\nEnter any integer: ");
    scanf("%d", &i_num);
    f_num = (float)i_num;
    printf("\nThe floating point representation of %d is %f.\n\n", i_num, f_num);

    return 0;
}