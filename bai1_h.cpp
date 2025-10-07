#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, S;

    printf("Nhap 3 canh tam giac: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Khong phai tam giac.\n");
    } else {
        if (a == b && b == c)
            printf("Tam giac deu.\n");
        else if ((a == b || b == c || a == c) &&
                 (fabs(a*a + b*b - c*c) < 1e-6 ||
                  fabs(a*a + c*c - b*b) < 1e-6 ||
                  fabs(b*b + c*c - a*a) < 1e-6))
            printf("Tam giac vuong can.\n");
        else if (fabs(a*a + b*b - c*c) < 1e-6 ||
                 fabs(a*a + c*c - b*b) < 1e-6 ||
                 fabs(b*b + c*c - a*a) < 1e-6)
            printf("Tam giac vuong.\n");
        else if (a == b || b == c || a == c)
            printf("Tam giac can.\n");
        else
            printf("Tam giac thuong.\n");

        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Dien tich: %.2f\n", S);
    }

    return 0;
}

