#include <stdio.h>

struct Matrix {
    int rows;
    int cols;
    int data[10][10];
};

int main() {
    struct Matrix mat;
    printf("Enter number of rows: ");
    scanf("%d", &mat.rows);
    printf("Enter number of columns: ");
    scanf("%d", &mat.cols);

    for(int i = 0; i < mat.rows; i++) {
        for(int j = 0; j < mat.cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat.data[i][j]);
        }
    }

    printf("Matrix:\n");
    for(int i = 0; i < mat.rows; i++) {
        for(int j = 0; j < mat.cols; j++) {
            printf("%d ", mat.data[i][j]);
        }
        printf("\n");
    }
    return 0;
}
