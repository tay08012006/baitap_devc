#include <stdio.h>

int main() {
    int n;
    long long ketQua = 1;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong tinh duoc giai thua kep cho so am!\n");
    } else {
        for (int i = n; i > 0; i -= 2) {
            ketQua *= i;
        }
        printf("%d!! = %lld\n", n, ketQua);
    }

    return 0;
}

