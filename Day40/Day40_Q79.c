// #100DaysofCode
// Q79 - Diagonal traversal of a matrix

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix elements row by row:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Output:\n");
    for(int d=0; d<r+c-1; d++)
        if(d%2==0)
            for(int i=(d<r?d:r-1); i>=0; i--) { int j=d-i; if(j<c) printf("%d ",a[i][j]); }
        else
            for(int i=0;i<r;i++) { int j=d-i; if(j>=0 && j<c) printf("%d ",a[i][j]); }

    printf("\n");
    return 0;
}