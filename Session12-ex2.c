#include <stdio.h>
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[] = {30,1,3,99,100};  
    int n = sizeof(arr) / sizeof(int);  
    printf("Cac phan tu trong mang la: ");
    printArr(arr, n);
    return 0;
}
