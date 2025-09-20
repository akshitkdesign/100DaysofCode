// #100DaysofCode
// Q41. Write a program to swap the first and last digit of a number

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    digits = (int)log10(num); // Number of digits - 1
    firstDigit = num / (int)pow(10, digits);

    // Remove first and last digit from the number
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Swap first and last digit
    swappedNum = lastDigit * (int)pow(10, digits) + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}