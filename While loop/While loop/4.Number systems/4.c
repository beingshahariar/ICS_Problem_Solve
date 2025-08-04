#include <stdio.h>

int main() {
    int octal, decimal = 0;
    int base = 1, octalDigit;

    printf("Enter an octal integer: ");
    scanf("%d", &octal);

    while (octal != 0) {
        octalDigit = octal % 10;
        decimal = decimal + octalDigit * base;
        octal = octal / 10;
        base = base * 8;
    }

    printf("Decimal representation: %d\n", decimal);

    return 0;
}

