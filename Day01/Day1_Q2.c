// #100DaysofCode
// Q2. Write a program to input two numbers and display their sum, difference, product, and quotient.

        #include <stdio.h>

      int main() {
        int num1, num2;
        
        // Asking for first number
        printf("Enter first number: ");
        scanf("%d", &num1);
        
        // Asking for second number
        printf("Enter second number: ");
        scanf("%d", &num2);

        // Calculations
        int sum = num1 + num2;
        int diff = num1 - num2;
        int product = num1 * num2;

        // Handle division safely
        if (num2 != 0) {
            int quotient = num1 / num2;
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=undefined (division by zero not allowed)\n", sum, diff, product);
        }

        return 0;
    }

