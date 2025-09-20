// #100DaysofCode
// Q38. Write a program to find the sum of digits of a number

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int temp = num; // Store original number for reference

    // Calculate sum of digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}