#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int mat[r][c], rowSum[r];
    printf("Enter elements:\n");
    for(i=0;i<r;i++){
        rowSum[i]=0;
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
            rowSum[i]+=mat[i][j];
        }
    }
    printf("Row sums: ");
    for(i=0;i<r;i++) printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}
