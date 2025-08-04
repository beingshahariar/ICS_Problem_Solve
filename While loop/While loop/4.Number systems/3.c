#include <stdio.h>

int main() {
    int binary, decimal = 0;
    int base = 1, binaryDigit;

    printf("Enter a binary integer: ");
    scanf("%d", &binary);

    while (binary != 0) {
        binaryDigit = binary % 10;
        decimal = decimal + binaryDigit * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal representation: %d\n", decimal);

    return 0;
}

