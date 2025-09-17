// #100DaysofCode
// Q8. Write a program to find and display the sum of the first n natural numbers.

    #include <stdio.h>

    int main() {
        int n, sum;

        // Input
        printf("Enter n: ");
        scanf("%d", &n);

        // Calculation
        sum = n * (n + 1) / 2;

        // Output
        printf("Sum=%d\n", sum);

        return 0;
    }
