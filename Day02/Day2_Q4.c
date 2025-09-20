// #100DaysofCode
// Q4. Write a program to calculate the area and circumference of a circle given its radius.

    #include <stdio.h>
    #define PI 3.14159

    int main() {
        float radius;

        // Taking input
        printf("Enter radius of circle: ");
        scanf("%f", &radius);

        // Calculations
        float area = PI * radius * radius;
        float circumference = 2 * PI * radius;

        // Output (2 decimal places)
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

        return 0;
    }
