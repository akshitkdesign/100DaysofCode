// #100DaysofCode
// Q40. Write a program to find the 1's complement of a binary number

#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; // supports up to 64-bit binary numbers

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);
    printf("1's complement of %s is: ", binary);

    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary number!\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}