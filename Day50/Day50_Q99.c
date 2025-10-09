#include <stdio.h>
#include <string.h>
#include <stdlib.h> // ✅ required for atoi()

int main() {
    char date[20], month[3];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    char day[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    int m = atoi(month); // convert month string to integer

    printf("Converted Date: %s-%s-%s\n", day, months[m - 1], year);
    return 0;
}