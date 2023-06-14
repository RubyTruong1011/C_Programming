/*
Q9 - (Odd or Even) Write a program that reads an integer and determines and prints
whether it’s odd or even. [Hint: Use the modulus operator. An even number is a multiple of
two. Any multiple of two leaves a remainder of zero when divided by 2.]
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
