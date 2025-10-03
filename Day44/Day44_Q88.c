// #100DaysofCode
// Q88. Replace spaces with hyphens in a string

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("Modified string: %s", str);

    return 0;
}