#include<stdio.h>

int main()
{
    int n,count = 1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int i = 1;
    while(count <= n)
    {
        count++;
        printf("%d ",i);
        i = i + 2;
    }
    return 0;
}
