// #100DaysofCode
// Q100. Print all substrings of a string

#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Substrings:\n");
    for (int i = 0; i < strlen(str); i++) {
        for (int j = i; j < strlen(str); j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}