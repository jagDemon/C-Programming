#include <stdio.h>

int main(){
    int n, m;

    printf("dimension (nxm): ");
    scanf("%dx%d", &n, &m);

    int matrix[n][m];

    //READ MATRIX
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    printf("hier das Ergebnis:\n");
    //WRITE MATRIX
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}