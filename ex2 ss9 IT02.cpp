#include <stdio.h>

int main(){
	int arr[5]={1,7,4,6,3};  
	int addIndex,value; 
	printf("mang ban dau la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
	
    printf("nhap vi tri muon thay : ");
    scanf("%d", & addIndex+1);
     
    if (addIndex<0 || addIndex>5) {
        printf("vi tri ko hop li.\n");
        return 0; 
    }
    printf("nhap gia tri muon thay : ");
    scanf("%d", &value); 
    arr[addIndex]=value; 
    printf("mang sau khi thay phan tu :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
	 
	return 0; 
} 
