// #100DaysofCode
// Q39. Write a program to find the product of odd digits of a number

#include <stdio.h>

int main() {
    int num, remainder, product = 1;
    int firstOdd = 1; // To control printing '*' between digits
    int hasOdd = 0;   // Flag to check if any odd digit exists

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int temp = num; // Store original number for reference

    printf("Product of odd digits of %d is: ", num);

    // Loop through each digit
    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
            if (!firstOdd) {
                printf("*");
            }
            printf("%d", remainder);
            firstOdd = 0;
        }
        temp /= 10;
    }

    if (hasOdd)
        printf(" = %d\n", product);
    else
        printf("There are no odd digits\n");

    return 0;
}