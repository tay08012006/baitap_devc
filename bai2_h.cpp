#include <stdio.h>

void doiDiem(float diem10, float *diem4, char *chu) {
    if (diem10 >= 9.0) {
        *diem4 = 4.0;
        *chu = 'A'; printf("+");
    } else if (diem10 >= 8.0) {
        *diem4 = 3.5;
        *chu = 'A';
    } else if (diem10 >= 7.0) {
        *diem4 = 3.0;
        *chu = 'B'; printf("+");
    } else if (diem10 >= 6.0) {
        *diem4 = 2.5;
        *chu = 'B';
    } else if (diem10 >= 5.0) {
        *diem4 = 2.0;
        *chu = 'C';
    } else if (diem10 >= 4.0) {
        *diem4 = 1.5;
        *chu = 'D';
    } else {
        *diem4 = 1.0;
        *chu = 'F';
    }
}

int main() {
    float diem10, diem4;
    char chu;

    printf("Nhap diem thang 10: ");
    scanf("%f", &diem10);

    doiDiem(diem10, &diem4, &chu);

    printf("Diem thang 4: %.1f\n", diem4);
    printf("Diem chu: %c\n", chu);

    return 0;
}

