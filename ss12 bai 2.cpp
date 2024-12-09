#include<stdio.h>
void inmang(int arr[],int n);
int main(){
	int arr[100];
	int n;
	printf("moi ban nhap so phan tu: ");
	scanf("%d",&n);
	inmang(arr,n);
	
}
void inmang(int arr[],int n){
	for(int i=0; i<n ;i++){
		printf("Nhap so phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("mang da nhap la :");
	for(int i=0; i<n ;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
