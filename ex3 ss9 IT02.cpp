#include <stdio.h>

int main(){
	int arr[100];
	int currentLength = -1; 
    int Index;

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

    printf("nhap vi tri muon xoa  : ", currentLength );
    scanf("%d", &Index);

    
    if (Index < 0 || Index > currentLength) {
        printf("vi tri ko hop li.\n");
        return 0;
    }

    if(Index<0 || Index>=currentLength){
    	printf("gia tri ko hop le \n"); 
	}else {
		for(int i = Index ; i < currentLength ; i++){
			arr[i]=arr[i+1]; 
		} 
		currentLength--;
	}

    printf("mang sau khi xoa phan tu :\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
	
