// #100DaysofCode
// Q90. Toggle case of each character in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for isupper, islower, tolower, toupper

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    printf("Toggled string: %s", str);
    return 0;
}