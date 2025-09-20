// #100DaysOfCode
// Q15. Write a program to input a character and check whether it is an uppercase alphabet, 
// lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;

    // Input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    } 
    else {
        printf("%c is a Special character.\n", ch);
    }

    return 0;
}
