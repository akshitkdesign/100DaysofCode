// #100DaysOfCode
// Q2 (Day 9). Write a program to find profit or loss percentage 
// given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    // Input
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
