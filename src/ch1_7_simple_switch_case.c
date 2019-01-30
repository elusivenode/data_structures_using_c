#include <stdio.h>

int main(void) {
    char ch;

    printf("\nEnter a letter of the alphabet (lower case): ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is a vowel.\n\n", ch);
            break;
        default:
            printf("\n%c is not a vowel.\n\n", ch);
    }
    return 0;
}