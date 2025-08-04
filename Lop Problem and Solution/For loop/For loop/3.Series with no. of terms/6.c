#include<stdio.h>

int main()
{
    int n,count = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 5; count < n; i = i + i)
    {
        printf("%d ",i);
        count++;
    }
    return 0;
}


