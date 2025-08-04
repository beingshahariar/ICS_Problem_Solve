#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 5; i <= n; i = i + i)
    {
        printf("%d ",i);
    }
    return 0;
}



