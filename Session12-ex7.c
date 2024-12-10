#include <stdio.h>
void nhapMaTran(int rows, int cols, int arr[rows][cols]) {
    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMaTran(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows;
	int cols;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    nhapMaTran(rows, cols, matrix);
    inMaTran(rows, cols, matrix);
    return 0;
}
