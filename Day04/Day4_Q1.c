// #100DaysofCode
// Q7. Write a program to swap two numbers without using a third variable.

    #include <stdio.h>

    int main() {
        int a, b;

        // Taking input
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);

        // Swapping without third variable
        a = a + b;
        b = a - b;
        a = a - b;

        // Output
        printf("After swap: %d %d\n", a, b);

        return 0;
    }
 