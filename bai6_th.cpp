#include <stdio.h>

int main() {
    float tienGui, laiSuat;
    int thang, i;

    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &tienGui);

    printf("Nhap so thang gui: ");
    scanf("%d", &thang);

    printf("Nhap lai suat 1 thang (%%): ");
    scanf("%f", &laiSuat);

    i = 1;
    while (i <= thang) {
        tienGui = tienGui + tienGui * laiSuat / 100;
        i = i + 1;
    }

    printf("\nSo tien nhan duoc sau %d thang la: %.2f\n", thang, tienGui);

    return 0;
}

