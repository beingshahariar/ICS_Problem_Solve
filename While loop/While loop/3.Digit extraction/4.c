#include <stdio.h>

int main() {
    int num, digit, temp, count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0,
        count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        switch (digit) {
            case 0:
                count0++;
                break;
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 5:
                count5++;
                break;
            case 6:
                count6++;
                break;
            case 7:
                count7++;
                break;
            case 8:
                count8++;
                break;
            case 9:
                count9++;
                break;
            default:
                break;
        }
        temp /= 10;
    }

    // Print the frequency of each digit
    printf("Digit frequencies:\n");
    if (count0 > 0) printf("Digit 0 occurs %d times\n", count0);
    if (count1 > 0) printf("Digit 1 occurs %d times\n", count1);
    if (count2 > 0) printf("Digit 2 occurs %d times\n", count2);
    if (count3 > 0) printf("Digit 3 occurs %d times\n", count3);
    if (count4 > 0) printf("Digit 4 occurs %d times\n", count4);
    if (count5 > 0) printf("Digit 5 occurs %d times\n", count5);
    if (count6 > 0) printf("Digit 6 occurs %d times\n", count6);
    if (count7 > 0) printf("Digit 7 occurs %d times\n", count7);
    if (count8 > 0) printf("Digit 8 occurs %d times\n", count8);
    if (count9 > 0) printf("Digit 9 occurs %d times\n", count9);

    return 0;
}

