#include <stdio.h>
#include <math.h>

// Hàm ki?m tra s? nguyên t?
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
                // Nh?p s? ph?n t? và giá tr? các ph?n t?
                printf("Nh?p s? ph?n t?: ");
                scanf("%d", &n);
                printf("Nh?p các ph?n t?:\n");
                for (i = 0; i < n; i++) {
                    printf("Ph?n t? %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            
            case 2:
                // In ra giá tr? các ph?n t? ðang qu?n l?
                printf("Các ph?n t? trong m?ng là:\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
                
            case 3:
                // In ra các ph?n t? ch?n và tính t?ng
                sum = 0;
                printf("Các ph?n t? ch?n trong m?ng là:\n");
                for (i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nT?ng các ph?n t? ch?n là: %d\n", sum);
                break;
            
            case 4:
                // In ra giá tr? l?n nh?t và nh? nh?t trong m?ng
                if (n > 0) {
                    int max = arr[0], min = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Giá tr? l?n nh?t trong m?ng: %d\n", max);
                    printf("Giá tr? nh? nh?t trong m?ng: %d\n", min);
                } else {
                    printf("M?ng r?ng.\n");
                }
                break;
                
            case 5:
                // In ra các ph?n t? là s? nguyên t? trong m?ng và tính t?ng
                countPrime = 0;
                totalPrimeSum = 0;
                printf("Các ph?n t? là s? nguyên t? trong m?ng là:\n");
                for (i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        totalPrimeSum += arr[i];
                        countPrime++;
                    }
                }
                printf("\nT?ng các s? nguyên t? trong m?ng là: %d\n", totalPrimeSum);
                break;
                
            case 6:
                // Nh?p vào m?t s? và th?ng kê trong m?ng có bao nhiêu ph?n t? ðó
                printf("Nh?p s? c?n th?ng kê: ");
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
                // Thêm m?t ph?n t? vào v? trí ch? ð?nh
                printf("Nh?p v? trí mu?n thêm ph?n t? (0-%d): ", n);
                int pos;
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("V? trí không h?p l?.\n");
                } else {
                    printf("Nh?p giá tr? ph?n t? mu?n thêm: ");
                    int value;
                    scanf("%d", &value);
                    for (i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    printf("Ph?n t? ð? ðý?c thêm vào v? trí %d.\n", pos);
                }
                break;
                
            case 8:
                // Thoát
                printf("Thoát chýõng tr?nh.\n");
                break;
                
            default:
                printf("L?a ch?n không h?p l?, vui l?ng ch?n l?i.\n");
        }
        
    } while (choice != 8);
    
    return 0;
}

