// #100DaysofCode
// Q80 - Multiply two matrices

#include <stdio.h>

int main() {

    int r1,c1,r2,c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);

    int a[r1][c1];
    printf("Enter first matrix:\n");
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) scanf("%d",&a[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
    
    if(c1!=r2){ printf("Multiplication not possible\n"); return 0; }
    
    int b[r2][c2], res[r1][c2];
    printf("Enter second matrix:\n");
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) scanf("%d",&b[i][j]);

    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++) res[i][j]+=a[i][k]*b[k][j];
        }

    printf("Output:\n");
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) printf("%d ",res[i][j]); printf("\n"); }

    return 0;
}
