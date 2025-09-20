// #100DaysOfCode
// Q45. Write a program to find the sum of the series:
// 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Input
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate sum
    for(i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    // Output
    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}