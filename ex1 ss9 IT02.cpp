#include <stdio.h>

int main(){
	int arr[100];
	int currentLength = 0; 
    int addIndex, value;

    printf("nhap phan tu ban dau : ");
    scanf("%d", &currentLength);

    
    if (currentLength > 100 || currentLength < 0) {
        printf("so phan tu ko hop le .\n");
        return 1; 
    }

    for (int i = 0; i < currentLength; i++) {
        printf("nhap phan tu thu  %d: ", i + 1);
        scanf("%d", &arr[i]);
    } 

    printf("nhap vi tri muon them  : ", currentLength);
    scanf("%d", &addIndex);

    
    if (addIndex < 0 || addIndex > currentLength) {
        printf("vi tri ko hop li.\n");
        return 0;
    }

    printf("nhap gia tri muon them : ");
    scanf("%d", &value);

    if (addIndex == currentLength) {
        arr[addIndex] = value;
        currentLength++;
    } else {
        
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }

    printf("mang sau khi them phan tu :\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
	
