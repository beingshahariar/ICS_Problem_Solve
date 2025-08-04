#include <stdio.h>
#include <math.h>

int main() {
    int num, original, firstDigit, lastDigit, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    lastDigit = num % 10;

    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }

    num = original;

    firstDigit = num / pow(10, count - 1);

    result = lastDigit * pow(10, count - 1) + num % (int)pow(10, count - 1) - lastDigit + firstDigit;

    printf("After swapping, the number is: %d\n", result);

    return 0;
}

