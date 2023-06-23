/*
(Rounding Numbers) An application of function floor is rounding a value to the nearest
integer. The statement
y = floor( x + .5 );
will round the number x to the nearest integer and assign the result to y. Write a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the rounded number. */

#include <stdio.h>
#include<math.h>

int main() {
    double x, y;

    printf("Enter some numbers or q to quit ");
    // using while loop to continuously read numbers until the user enters 1 to quit
    // it will return 1 if a single value was successfully read and assigned to the variable x
    while(scanf("%lf", &x) == 1) {
        y = floor(x + 0.5);
        printf("Original number: %.2f, Rounded number: %.0f\n", x, y);

    }
    return 0;
}

