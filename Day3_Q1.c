// #100daysofCode
// Q1. Write a program to convert temperature from Celsius to Fahrenheit.

    #include <stdio.h>

    int main() {
        float celsius, fahrenheit;

        // Taking input
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);

        // Conversion
        fahrenheit = (celsius * 9 / 5) + 32;

        // Output
        printf("Fahrenheit=%.2f\n", fahrenheit);

        return 0;
    }
