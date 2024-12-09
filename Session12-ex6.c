#include <stdio.h>
#include <stdbool.h>
bool check(int n) {
    if (n <= 1) {
        return false;  
    }  
    int sum = 0;  
    for (int i = 1; i < n ; i++) {  
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int a;
    int b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    if (check(a)) {
        printf("%d la so hoan hao\n", a);
    } else {
        printf("%d khong phai so hoan hao\n", a);
    }
    if (check(b)) {
        printf("%d la so hoan hao\n", b);
    } else {
        printf("%d khong phai so hoan hao\n", b);
    }
    return 0;
}
