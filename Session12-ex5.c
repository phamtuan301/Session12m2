#include <stdio.h>
#include <stdbool.h>
bool primeCheck(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i * i < n; i++) {  
        if (n % i == 0) {
            return false; 
        }
    }
    return true;  
}
int main() {
    int a;
    int b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    if (primeCheck(a)) {
        printf("%d la so nguyen to\n", a);
    } else {
        printf("%d khong phai la so nguyen to\n", a);
    }
    if (primeCheck(b)) {
        printf("%d la so nguyen to\n", b);
    } else {
        printf("%d khong phai so nguyen to\n", b);
    }
    return 0;
}
