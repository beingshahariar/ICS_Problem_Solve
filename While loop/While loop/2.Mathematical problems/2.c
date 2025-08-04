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

    int i = big;
    while(1)
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            printf("LCM of %d and %d is: %d\n",num1,num2,i);
            break;
        }
        i++;
    }
    return 0;
}

