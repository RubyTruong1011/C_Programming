// check the size of a variable using the sizeof() operator.

#include <stdio.h>

int main() {
    short a;
    long b;
    long long c;
    long double d;

    printf("The size of short = %d bytes\n", sizeof(a));
    printf("The size of long = %d bytes\n", sizeof(b));
    printf("The size of long long = %d bytes\n", sizeof(c));
    printf("The size of long double = %d bytes\n", sizeof(d));

    return 0;
}
