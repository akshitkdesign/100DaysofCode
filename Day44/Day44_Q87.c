// #100DaysofCode
// Q87. Count spaces, digits, and special characters in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // allows spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || 
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            // do nothing for alphabets
        }
        else if (str[i] != '\n') // ignore newline
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}