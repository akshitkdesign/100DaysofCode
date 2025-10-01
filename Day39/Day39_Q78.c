// #100DaysofCode
// Q78 - Sum of main diagonal elements

#include <stdio.h>

int main() {
    int n, m, sum=0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    if(n != m) { 
        printf("Output: Not a square matrix\n"); 
        return 0; 
    }

    int a[n][n];
    printf("Enter matrix elements row by row:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j) sum += a[i][j]; // sum main diagonal
        }

    printf("Output: %d\n", sum);
    return 0;
}