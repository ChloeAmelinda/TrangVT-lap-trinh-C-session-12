#include<stdio.h>

int calculatesum();
int main(){
	int a,b;
	int sum;
	sum= calculatesum();
	printf("Tong 2 so = %d\n", sum);
	return 0;
}
int calculatesum(){
	int a,b;
	int sum;
	printf("Moi ban nhap so thu nhat : ");
	scanf("%d",&a);
	printf("Moi ban nhap so thu 2: ");
	scanf("%d",&b);
	sum=a+b;
	return sum;
}
