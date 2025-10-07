#include <stdio.h>

float tinhTienGui(float tienGui, int thang, float laiSuat) {
    int i;
    for (i = 1; i <= thang; i++) {
        tienGui = tienGui + tienGui * laiSuat / 100;
    }
    return tienGui;
}

int main() {
    float tienGui, laiSuat, tienNhan;
    int thang;

    printf("Nhap so tien gui: ");
    scanf("%f", &tienGui);

    printf("Nhap so thang gui: ");
    scanf("%d", &thang);

    printf("Nhap lai suat 1 thang (%%): ");
    scanf("%f", &laiSuat);

    tienNhan = tinhTienGui(tienGui, thang, laiSuat);

    printf("So tien nhan duoc sau %d thang: %.2f\n", thang, tienNhan);

    return 0;
}

