// #100DaysofCode
// Q43. Write a program to check if a number is a strong number

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, temp, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    // Check if sum equals the original number
    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}