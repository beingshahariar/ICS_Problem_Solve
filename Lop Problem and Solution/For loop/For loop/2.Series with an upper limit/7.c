#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 10; i <= n; i = i * 3)
    {
        printf("%d ",i);
    }
    return 0;
}



