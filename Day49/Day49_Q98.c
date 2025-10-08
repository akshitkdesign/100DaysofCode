// #100DaysofCode
// Q98. Print initials of a name with the surname displayed in full

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100], words[10][20];
    int i = 0, j = 0, k = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // remove newline

    // Split the name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            words[k][j] = '\0';
            k++; j = 0;
        } else {
            words[k][j++] = name[i];
        }
    }
    words[k][j] = '\0';  // terminate last word

    // Print initials for all but last word
    for (i = 0; i < k; i++)
        printf("%c.", toupper(words[i][0]));

    // Print last word in full
    printf(" %s\n", words[k]);

    return 0;
}