/*
Write a program that asks the user to enter the highest rainfall
ever in one season for a country, and the rainfall in the current year for that country, obtains
the values from the user, checks if the current rainfall exceed the highest rainfall and prints
an appropriate message on the screen. If the current rainfall is higher, it assigns that value
as the highest rainfall ever. Use only the single-selection form of the if statement you
learned in this chapter.
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int highestRainfall = 0;
    int currentRainfall = 0;

    printf("Enter HIghest Rainfall : ");
    scanf("%d", &highestRainfall);

    printf("Enter Current Rainfall : ");
    scanf("%d", &currentRainfall);

    if (currentRainfall > highestRainfall) {
        highestRainfall = currentRainfall;
    }

    printf("Highest Rainfall: %d\n", highestRainfall);

    return 0;
}
