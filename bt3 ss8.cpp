#include <stdio.h>

int main() {
    int n;
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf(" %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("nhap matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("cac pahn tu trong ma tran la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

