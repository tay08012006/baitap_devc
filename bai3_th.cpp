#include <stdio.h>

int main() {
    int thang, nam, soNgay;

    printf("Nhap thang: ");
    scanf("%d", &thang);

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
        soNgay = 31;
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        soNgay = 30;
    else if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
            soNgay = 29;
        else
            soNgay = 28;
    } else
        soNgay = 0;

    if (soNgay == 0)
        printf("Thang khong hop le!\n");
    else
        printf("Thang %d nam %d co %d ngay.\n", thang, nam, soNgay);

    return 0;
}

