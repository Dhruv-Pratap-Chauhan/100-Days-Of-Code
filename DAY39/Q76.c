#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n,&n);
    int mat[n][n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
    int symmetric=1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(mat[i][j]!=mat[j][i]) symmetric=0;
    printf("%s\n", symmetric?"True":"False");
    return 0;
}
