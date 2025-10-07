#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int demSoNguyenTo(int m, int n) {
    int dem = 0;
    for (int i = m; i <= n; i++) {
        if (laSoNguyenTo(i))
            dem++;
    }
    return dem;
}

int main() {
    printf("So luong so nguyen to trong [1, 10]: %d\n", demSoNguyenTo(1, 10));
    printf("So luong so nguyen to trong [1, 1000]: %d\n", demSoNguyenTo(1, 1000));
    printf("So luong so nguyen to trong [1001, 100000]: %d\n", demSoNguyenTo(1001, 100000));

    return 0;
}

