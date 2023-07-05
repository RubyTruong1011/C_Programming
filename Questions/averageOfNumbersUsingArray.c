// Program to find the average of n numbers using arrays

#include <stdio.h>

int main() {
    int marks[10], i, number, sum=0;
    double average;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    for (i=0; i< n; ++i) {
        scanf("%d", &marks[i]);

        sum += marks[i];
    }

    average = (double) sum/number;

    printf("Average = %.2lf", average);

    return 0;
}
