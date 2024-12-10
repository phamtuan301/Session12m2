#include <stdio.h>
#include <stdlib.h>
int arr[100];
int n = 0;
void array() {
    printf("Nhap so phan tu cua mang(<100): ");
    scanf("%d", &n);
    if (n > 100) {
        printf("So phan tu phai nho hon 100\n");
        return;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printArray() {
    if (n == 0) {
        printf("Mang khong chua phan tu\n");
        return;
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void addElement() {
    int position;
	int value;
    printf("Nhap vi tri phan tu can them (0 den %d): ", n);
    scanf("%d", &position);
    if (position < 0 || position > n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    printf("Nhap gia tri phan tu muon them: ");
    scanf("%d", &value);
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    n++;
}
void updateElement() {
    int position;
	int value;
    printf("Nhap vi tri phan tu can sua: ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[position] = value;
}
void deleteElement() {
    int position;
    printf("Nhap vi tri phan tu can xoa: ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void sortArray() {
    int choice;
    printf("Chon cach sap xep mang:\n");
    printf("a. Sap xep mang giam dan\n");
    printf("b. Sap xep mang tang dan\n");
    printf("Lua chon ua ban: ");
    getchar(); 
    choice = getchar();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((choice == 'a' && arr[i] < arr[j]) || (choice == 'b' && arr[i] > arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la:\n");
    printArray();
}
void linearSearch() {
    int value;
    printf("Nhap gia tri phan tu can tim: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Phan tu duoc tim thay tai vi tri %d\n", i);
            return;
        }
    }
    printf("Khong tim thay phan tu %d trong mang\n", value);
}
void binarySearch() {
    int value;
	int left = 0;
	int right = n - 1;
	int mid;
    printf("Nhap gia tri phan tu can tim: ");
    scanf("%d", &value);
    sortArray();
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == value) {
            printf("Phan tu duoc tim thay tai vi tri %d\n", mid);
            return;
        }
        if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Khong tim thay phan tu %d trong mang\n", value);
}
void exitMenu() {
    printf("Thoat chuong trinh\n");
}
int main() {
    int choice;
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. Them phan tu tai vi tri chi dinh\n");
        printf("4. Sua phan tu tai vi tri chi dinh\n");
        printf("5. Xoa phan tu tai vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu trong mang\n");
        printf("7. Tim kiem phan tu\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                array();
                break;
            case 2:
                printArray();
                break;
            case 3:
                addElement();
                break;
            case 4:
                updateElement();
                break;
            case 5:
                deleteElement();
                break;
            case 6:
                sortArray();
                break;
            case 7:
                printf("Chon loai tim kiem:\n");
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Nhap lua chon: ");
                getchar(); 
                choice = getchar();
                if (choice == 'a') {
                    linearSearch();
                } else if (choice == 'b') {
                    binarySearch();
                }
                break;
            case 8:
                exitMenu();
                return 0;
            default:
                printf("Lua chon khong hop le vui long nhap lai\n");
        }
    }
    return 0;
}
