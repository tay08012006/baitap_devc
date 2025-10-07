#include <stdio.h>

float tinhTienDien(int chiSoTruoc, int chiSoSau) {
    int soLuong = chiSoSau - chiSoTruoc;
    float tienDien = 0;

    if (soLuong <= 0)
        return 0;

    if (soLuong <= 100)
        tienDien = soLuong * 1418;
    else if (soLuong <= 150)
        tienDien = 100 * 1418 + (soLuong - 100) * 1622;
    else if (soLuong <= 200)
        tienDien = 100 * 1418 + 50 * 1622 + (soLuong - 150) * 2044;
    else if (soLuong <= 300)
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soLuong - 200) * 2210;
    else if (soLuong <= 400)
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soLuong - 300) * 2361;
    else
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soLuong - 400) * 2420;

    return tienDien;
}

int main() {
    int chiSoTruoc, chiSoSau;
    float tien;

    printf("Nhap chi so dien thang truoc: ");
    scanf("%d", &chiSoTruoc);
    printf("Nhap chi so dien thang sau: ");
    scanf("%d", &chiSoSau);

    tien = tinhTienDien(chiSoTruoc, chiSoSau);

    if (tien == 0)
        printf("Chi so khong hop le.\n");
    else
        printf("Tien dien phai tra: %.0f VND\n", tien);

    return 0;
}

