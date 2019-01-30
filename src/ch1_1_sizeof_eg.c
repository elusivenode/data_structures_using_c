#include <stdio.h>

int main (void) {

    printf("sizeof(char): %d\nsizeof(int):%d\nsizeof(float):%d\nsizeof(double):%d\nsizeof(long double):%d\n"
            , sizeof(char)
            , sizeof(int)
            , sizeof(float)
            , sizeof(double)
            , sizeof(long double)
    );
}
