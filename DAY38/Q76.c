#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n], symmetric=1;
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j]!=mat[j][i])
                symmetric=0;

    if(symmetric) printf("True\n");
    else printf("False\n");
    return 0;
}
