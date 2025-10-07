#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int laSNT = 1;  
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 2) {
        laSNT = 0;  // False
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                laSNT = 0; 
                break;
            }
        }
    }

    if (laSNT == 1)
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);

    return 0;
}

