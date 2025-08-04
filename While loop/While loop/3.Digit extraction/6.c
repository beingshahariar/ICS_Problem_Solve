#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, sum = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        num /= 10;
        count++;
    }

    num = original;

    while (num != 0) {
        digit = num % 10;
        sum = sum + pow(digit, count);
        num = num / 10;
    }

    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

