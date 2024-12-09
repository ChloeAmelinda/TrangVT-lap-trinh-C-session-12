#include <stdio.h>

// kiem tra so nguyen to  
int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int a,b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    //kiem tra so thu nhat
    if (isPrime(a)) {
        printf("%d la so nguyen to.\n", a);
    } else {
        printf("%d khong phai la so nguyen to\n", a);
    }

    //kiem tra so thu 2
    if (isPrime(b)) {
        printf("%d la so nguyen to.\n", b);
    } else {
        printf("%d khong phai la so nguyen to\n", b);
    }

    return 0;
}
