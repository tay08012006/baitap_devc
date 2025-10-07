#include <stdio.h>

int main() {
    char tenKhachHang[50];
    int chiSoTruoc, chiSoSau, soLuong;
    float tienDien;

    printf("Nhap ten khach hang: ");
    fgets(tenKhachHang, sizeof(tenKhachHang), stdin);

    printf("Nhap chi so dien cu: ");
    scanf("%d", &chiSoTruoc);

    printf("Nhap chi so dien moi: ");
    scanf("%d", &chiSoSau);

    soLuong = chiSoSau - chiSoTruoc;

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

    printf("\n===== THONG TIN KHACH HANG =====\n");
    printf("Ten khach hang : %s", tenKhachHang);
    printf("So kWh tieu thu : %d kWh\n", soLuong);
    printf("Tien dien phai tra: %.2f VND\n", tienDien);
    printf("================================\n");

    return 0;
}

