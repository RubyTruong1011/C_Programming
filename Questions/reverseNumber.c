// Write a program to reverse an integer number using while loop.

#include <stdio.h>

int main() {
    int number, reverse = 0;

    printf("Enter a 5 digit decimal number: ");
    scanf("%d", &number);

    while (number > 0) {
        int remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number /= 10;
    }

    printf("The reverse number: %d\n", reverse);

    return 0;
}
