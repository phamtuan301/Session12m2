#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int x;
	int y;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &y);
    int result = ucln(x, y);
    printf("Uoc chung lon nhat cua  %d va %d la: %d\n", x, y, result);
    return 0;
}
