/*
 Write a program that reads a nonnegative integer and computes and prints its factorial. The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined as follows:
   n! = n*(n-1)*(n-2)*...*1 (for values of n greater than or equal to 1)
and
   n! = 1 (for n=0).
*/

#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid input. Please enter a nonnegative integer.\n");
        return 0;
    }

    for (int i = number; i >= 1; i--) {
        factorial *= i;
    }

    printf("%d! = %d\n", number, factorial);

    return 0;
}
