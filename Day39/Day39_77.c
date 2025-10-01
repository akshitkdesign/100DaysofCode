// #100DaysofCode
// Q77 - Check if diagonal elements of a matrix are distinct

#include <stdio.h>

int main() {
    int n, m, distinct = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    if(n != m) { 
        printf("Output: False (not a square matrix)\n"); 
        return 0; 
    }

    int a[n][n];
    printf("Enter matrix elements row by row:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i][i]==a[j][j]){
                distinct=0;
                break;
            }

    printf("Output: %s\n", distinct ? "True" : "False");
    return 0;
}