#include<stdio.h>

int main()
{
    int num, oct = 0, rem = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d",&num);

    printf("Octal Equivalent of %d is ", num);
    while(num)
    {
        rem = num % 8;
        oct = oct + rem * place;
        num = num / 8;
        place = place * 10;
    }
    printf("%d\n", oct);

    return 0;
}
