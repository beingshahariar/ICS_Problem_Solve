#include<stdio.h>

int main()
{
    int n,count = 0,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 1; count < n; i++)
    {
        sum = sum + i*(i+1);
        count++;
    }
    printf("%d\n",sum);

    return 0;
}





