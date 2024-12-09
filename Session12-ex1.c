#include <stdio.h>
int cal(int a, int b){
	int sum = a + b;
	return sum;
}
int main(){
	int firstNumber;
	int secondNumber;
	printf("Nhap so thu nhat: ");
	scanf("%d", &firstNumber);
	printf("Nhap so thu hai: ");
	scanf("%d", &secondNumber);
	int tong = cal(firstNumber, secondNumber);
	printf("Tong hai so la: %d", tong);
	return 0;
}