#include <stdio.h>

long long tinhGiaiThuaKep(int n) {
    long long tich = 1;
    while (n > 1) {
        tich *= n;
        n -= 2;
    }
    return tich;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Khong tinh duoc giai thua kep cho so am.\n");
    else
        printf("%d!! = %lld\n", n, tinhGiaiThuaKep(n));

    return 0;
}

