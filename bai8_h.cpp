#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(char *pw) {
    int hasUpper = 0, hasLower = 0, hasDigit = 0;
    int length = strlen(pw);

    if (length < 8)
        return 0; // Không ð? ð? dài

    for (int i = 0; i < length; i++) {
        if (isupper(pw[i])) hasUpper = 1;
        else if (islower(pw[i])) hasLower = 1;
        else if (isdigit(pw[i])) hasDigit = 1;
    }

    if (hasUpper && hasLower && hasDigit)
        return 1; // Manh 
    else
        return 0; // Ko dat 
}

int main() {
    char pw[100];
    printf("Nhap mat khau: ");
    scanf("%s", pw);

    if (isStrongPassword(pw))
        printf("Mat khau manh!\n");
    else
        printf("Mat khau yeu!\n");

    return 0;
}

