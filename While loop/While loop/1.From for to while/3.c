#include<stdio.h>

int main()
{
    int n,count = 1,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int i = 1;
    int j = 3;
    while(count <= n)
    {
        count++;
        sum = sum + i*j;
        i = i * 2;
        j = j + 3;
    }
    printf("%d\n",sum);
    return 0;
}

