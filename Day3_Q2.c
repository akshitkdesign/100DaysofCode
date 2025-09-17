// #100DaysofCode
// Q2. Write a program to swap two numbers using a third variable.

        #include <stdio.h>

        int main() {
            int a, b, temp;

            // Taking input
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);

            // Swapping
            temp = a;
            a = b;
            b = temp;

            // Output
            printf("After swap: %d %d\n", a, b);

            return 0;
        }
