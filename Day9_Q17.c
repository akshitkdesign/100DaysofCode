// #100DaysOfCode
// Q17. Write a program to find the roots of a quadratic equation and categorize them.

    #include <stdio.h>
    #include <math.h>

    int main() {
        float a, b, c, discriminant, root1, root2;

        // Input
        printf("Enter coefficients a, b and c: ");
        scanf("%f %f %f", &a, &b, &c);

        // Calculate discriminant
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
        }
        else if (discriminant == 0) {
            // Equal real roots
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
        }
        else {
            // Complex roots
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
        }

        return 0;
    }