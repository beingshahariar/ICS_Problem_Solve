#include<stdio.h>

int main()
{
    int n,count = 0,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 2, j = 5; count < n; i = i * 2, j = j + 3)
    {
        sum = sum + i*j;
        count++;
    }
    printf("%d\n",sum);

    return 0;
}





