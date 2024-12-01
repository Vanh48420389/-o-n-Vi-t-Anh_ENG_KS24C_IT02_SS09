#include <stdio.h>
#include <stdlib.h>

void showMenu() {
    printf("\nMENU\n");
    printf("1. nhap vao mang\n");
    printf("2. hien thi mang\n");
    printf("3. them phan tu\n");
    printf("4. sua phan tu\n");
    printf("5. xoa phan tu\n");
    printf("6. thoat\n");
    printf("lua chon cua ban : ");
}

void inputArray(int **arr, int *size) {
    printf("nhap so phan tu cua mang: ");
    scanf("%d", size);
    *arr = (int *)malloc(*size * sizeof(int));  
    printf("nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *size; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}

void displayArray(int *arr, int size) {
    printf("mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void addElement(int **arr, int *size) {
    int value;
    printf("nhap phan tu them vao : ");
    scanf("%d", &value);

    *arr = (int *)realloc(*arr, (*size + 1) * sizeof(int));
    (*arr)[*size] = value;  
    (*size)++;  
    printf("xoa phan tu thu %d khoi mang.\n", value);
}

void editElement(int *arr, int size) {
    int index, newValue;
    printf("nhap so can sua  (0 -> %d): ", size - 1);
    scanf("%d", &index);

    if (index >= 0 && index < size) {
        printf("nhap gia tri moi cho phan tu thu  %d: ", index + 1);
        scanf("%d", &newValue);
        arr[index] = newValue;
        printf("da sua phan tu thu %d thanh %d.\n", index + 1, newValue);
    } else {
        printf("chinh sua ko hop li\n");
    }
}

void deleteElement(int **arr, int *size) {
    int index;
    printf("nhap chi so phan tu cna xoa (0 -> %d): ", *size - 1);
    scanf("%d", &index);

    if (index >= 0 && index < *size) {
        for (int i = index; i < *size - 1; i++) {
            (*arr)[i] = (*arr)[i + 1];  
        }

        *arr = (int *)realloc(*arr, (*size - 1) * sizeof(int));
        (*size)--;  
        printf("da xoa phan tu thu %d khoi mang .\n", index + 1);
    } else {
        printf("chinh sua ko hop li!\n");
    }
}

int main() {
    int *arr = NULL;  
    int size = 0;  
    int choice;

    do {
        showMenu();  
        scanf("%d", &choice);  
        switch (choice) {
            case 1:
                inputArray(&arr, &size); 
                break;
            case 2:
                displayArray(arr, size);  
                break;
            case 3:
                addElement(&arr, &size);  
                break;
            case 4:
                editElement(arr, size);  
                break;
            case 5:
                deleteElement(&arr, &size);  
                break;
            case 6:
                printf("thoat chuong trinh.\n");
                break;
            default:
                printf("lua chon ko hop le vui lòng chon lai.\n"); 
        }
    } while (choice != 6);  
    
    if (arr != NULL) {
        free(arr);
    }

    return 0;
}

