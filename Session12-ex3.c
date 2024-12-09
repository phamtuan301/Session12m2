#include <stdio.h>
long long giaiThua(int n) {
    long long result = 1;
    if (n < 0) {
        return 0;  
    }
    for (int i = 1; i <= n; i++) {
        result *= i;
    }  
    return result;
}
int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    long long result = giaiThua(n);
    if (result == 0) {
        printf("Khong the tinh\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", n, result);
    }
    return 0;
}
