/*
Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then
calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human  ervices/National Institutes of Health so the user can evaluate his/her BMI:
**BMI VALUES**

- Underweight: less than 18.5
- Normal: between 18.5 and 24.9
- Overweight: between 25 and 29.9
- Obese: 30 or greater
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float BMI = 0;
    int weight = 0;
    float height = 0;

    printf("Please enter your height in meter\n");
    scanf("%f", &height);
    printf("Please enter your weight in kilogram\n");
    scanf("%d", &weight);
    BMI = weight / (height * height);
    printf("Your BMI is:%f\n", BMI);

    if (BMI < 18.5) {
        printf("You're underweight.");
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("You have a normal weight.\n");
    }
    else if (BMI >= 25 && BMI <= 29.9) {
        printf("You're overweight.\n");
    }
    else
    {
        printf("You are obese.");
    }



    return 0;
}
