#include <stdio.h>
int find(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max; 
}
int main() {
	int arr[100]; 
	int n = sizeof(arr) / sizeof(arr[0]);  
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang\n");
    for (int i=0;i<n;i++){
    	printf("Phan tu thu %d:", i+1);
    	scanf("%d", &arr[i]);
	}
    int max = find(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}
