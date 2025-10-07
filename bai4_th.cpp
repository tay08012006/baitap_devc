#include <stdio.h>

int main() {
    char hoTen[50];
    float toan, van, tin, diemTB;

    printf("Nhap ho ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Van: ");
    scanf("%f", &van);
    printf("Nhap diem Tin hoc: ");
    scanf("%f", &tin);

    diemTB = (toan + van + tin) / 3;

    printf("\nKET QUA HOC TAP\n");
    printf("Ho ten: %s", hoTen);
    printf("Diem trung binh: %.2f\n", diemTB);

    if (diemTB < 5)
        printf("Xep loai: Yeu\n");
    else if (diemTB < 7)
        printf("Xep loai: Trung binh\n");
    else if (diemTB < 8)
        printf("Xep loai: Kha\n");
    else
        printf("Xep loai: Gioi\n");
    return 0;
}

