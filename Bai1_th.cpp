#include <stdio.h>

int main() {
    char tenMatHang[50];
    float trongLuong, donGia;
    int maChatLuong, soLuong;

    printf("Nhap ten mat hang: ");
    fgets(tenMatHang, sizeof(tenMatHang), stdin);

    printf("Nhap trong luong (kg): ");
    scanf("%f", &trongLuong);

    printf("Nhap don gia (VND): ");
    scanf("%f", &donGia);

    printf("Nhap ma chat luong (so nguyen): ");
    scanf("%d", &maChatLuong);

    printf("Nhap so luong: ");
    scanf("%d", &soLuong);

    printf("\n===== THONG TIN MAT HANG =====\n");
    printf("Ten mat hang   : %s", tenMatHang);
    printf("Trong luong    : %.2f kg\n", trongLuong);
    printf("Don gia        : %.2f VND\n", donGia);
    printf("Ma chat luong  : %d\n", maChatLuong);
    printf("So luong       : %d\n", soLuong);
    printf("==============================\n");

    return 0;
}

