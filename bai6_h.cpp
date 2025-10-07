#include <stdio.h>

int tinhSoThang(double tienGui, double tienNhan, double laiSuat) {
    int thang = 0;
    while (tienGui < tienNhan) {
        tienGui = tienGui + tienGui * laiSuat / 100;
        thang++;
    }
    return thang;
}

int main() {
    double tienGui, tienNhan, laiSuat;
    int thang;

    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &tienGui);
    printf("Nhap so tien mong muon co duoc: ");
    scanf("%lf", &tienNhan);
    printf("Nhap lai suat 1 thang (%%): ");
    scanf("%lf", &laiSuat);

    thang = tinhSoThang(tienGui, tienNhan, laiSuat);

    printf("Can gui it nhat %d thang de co duoc so tien %.2lf.\n", thang, tienNhan);

    return 0;
}

