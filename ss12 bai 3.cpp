#include<stdio.h>
int giaithua();
int main(){
	int ketqua= giaithua();
	printf("Giai thua cua so vua nhap la: %d",ketqua);
	return 0;
} 
int giaithua(){
	int n ;
	int result=1;
	printf("Moi ban nhap so bat ki: ");
	scanf("%d",&n);
	if(n<0 || n==1 ||n==0 ){
		return 1;
	}
	else{
		for(int i=2; i<=n ; i++){
			result*=i;
		}
	}
	return result;
}
