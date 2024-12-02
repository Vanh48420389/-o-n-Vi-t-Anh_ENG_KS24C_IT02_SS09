#include <stdio.h>

int main(){
	int arr[100], n, choice;
	int position, value;
	do{
		printf("---MENU---\n");
		printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
		switch(choice){
			case 1:  
			printf("Nhap so luong phan tu cho mang: ");
			scanf("%d", &n);
			printf("Nhap cac phan tu cho mang:\n ");
			for(int i=0; i<n;i++){
				printf("Nhap phan tu thu %d cho mang: ", i+1);
				scanf("%d", &arr[i]);
			}
			break;
			case 2: 
			printf("In ra mang sau khi them moi cac phan tu: ");
			for(int i=0; i<n;i++){
				printf("%3d", arr[i]);
			}
			printf("\n");
			break;
			case 3: 
			printf("Nhap vi tri muon them moi phan tu: ");
			scanf("%d",&position); 
			printf("Nhap gia tri muon them moi vao mang: ");
			scanf("%d",&value);
			if(position<0 || position > n){
				printf("Vi tri ban nhap khong hop le\n");
			}else {
				for (int i = n; i > position; i--) {
       				arr[i] = arr[i - 1];
    			}
    			arr[position]=value;
    			n++;
		    }
			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			case 4:  
			printf("Nhap vao vi tri ban muon sua: ");
			scanf("%d", &position);
			if(position <0 || position>n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
			}else{
				printf("Nhap vao gia tri ban muon thay doi: ");
				scanf("%d", &value);
			}
			arr[position]=value;
			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");			
			break;
			case 5: 
			printf("Nhap vao vi tri ban muon xoa: ");
			scanf("%d", &position);
			if(position <0 || position>n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
			}
			for(int i =position; i<n-1;i++){
				arr[i]=arr[i+1];
			}
			n--;
			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			default: 
				printf("Lua chon cua ban khong hop le");
		}
				
	}while(choice!=6);
	return 0;
}

