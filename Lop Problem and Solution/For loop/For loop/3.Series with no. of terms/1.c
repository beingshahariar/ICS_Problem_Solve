#include<stdio.h>

int main()
{
    int n,count = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 1; count < n; i++)
    {
        printf("%d ",i);
        count++;
    }
    return 0;
}
