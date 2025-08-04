#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int big,small;
    if(num1 > num2)
    {
        big = num1;
        small = num2;
    }
    else
    {
        big = num2;
        small = num1;
    }

    int i = small;
    while(i > 0)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            printf("GCD of %d and %d is: %d\n",num1,num2,i);
            break;
        }
        i--;
    }
    return 0;
}
