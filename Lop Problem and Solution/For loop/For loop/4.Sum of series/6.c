#include<stdio.h>

int main()
{
    int n,count = 0,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 5; count < n; i = i + i)
    {
        sum = sum + i;
        count++;
    }
    printf("%d\n",sum);

    return 0;
}




