#include <stdio.h>
#include <math.h>

// H�m ki?m tra s? nguy�n t?
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, choice;
    int arr[100], i, sum, countPrime, totalPrimeSum, countElement;

    do {
        // In ra menu
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        
        // Nh?p l?a ch?n
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Nh?p s? ph?n t? v� gi� tr? c�c ph?n t?
                printf("Nh?p s? ph?n t?: ");
                scanf("%d", &n);
                printf("Nh?p c�c ph?n t?:\n");
                for (i = 0; i < n; i++) {
                    printf("Ph?n t? %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            
            case 2:
                // In ra gi� tr? c�c ph?n t? �ang qu?n l?
                printf("C�c ph?n t? trong m?ng l�:\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
                
            case 3:
                // In ra c�c ph?n t? ch?n v� t�nh t?ng
                sum = 0;
                printf("C�c ph?n t? ch?n trong m?ng l�:\n");
                for (i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nT?ng c�c ph?n t? ch?n l�: %d\n", sum);
                break;
            
            case 4:
                // In ra gi� tr? l?n nh?t v� nh? nh?t trong m?ng
                if (n > 0) {
                    int max = arr[0], min = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gi� tr? l?n nh?t trong m?ng: %d\n", max);
                    printf("Gi� tr? nh? nh?t trong m?ng: %d\n", min);
                } else {
                    printf("M?ng r?ng.\n");
                }
                break;
                
            case 5:
                // In ra c�c ph?n t? l� s? nguy�n t? trong m?ng v� t�nh t?ng
                countPrime = 0;
                totalPrimeSum = 0;
                printf("C�c ph?n t? l� s? nguy�n t? trong m?ng l�:\n");
                for (i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        totalPrimeSum += arr[i];
                        countPrime++;
                    }
                }
                printf("\nT?ng c�c s? nguy�n t? trong m?ng l�: %d\n", totalPrimeSum);
                break;
                
            case 6:
                // Nh?p v�o m?t s? v� th?ng k� trong m?ng c� bao nhi�u ph?n t? ��
                printf("Nh?p s? c?n th?ng k�: ");
                scanf("%d", &countElement);
                int count = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == countElement) {
                        count++;
                    }
                }
                printf("S? %d xu?t hi?n %d l?n trong m?ng.\n", countElement, count);
                break;
                
            case 7:
                // Th�m m?t ph?n t? v�o v? tr� ch? �?nh
                printf("Nh?p v? tr� mu?n th�m ph?n t? (0-%d): ", n);
                int pos;
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("V? tr� kh�ng h?p l?.\n");
                } else {
                    printf("Nh?p gi� tr? ph?n t? mu?n th�m: ");
                    int value;
                    scanf("%d", &value);
                    for (i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    printf("Ph?n t? �? ��?c th�m v�o v? tr� %d.\n", pos);
                }
                break;
                
            case 8:
                // Tho�t
                printf("Tho�t ch��ng tr?nh.\n");
                break;
                
            default:
                printf("L?a ch?n kh�ng h?p l?, vui l?ng ch?n l?i.\n");
        }
        
    } while (choice != 8);
    
    return 0;
}

