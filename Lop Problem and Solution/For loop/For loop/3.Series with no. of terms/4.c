#include<stdio.h>

int main()
{
    int n,count = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 3; count < n; i = i + 3)
    {
        printf("%d ",i);
        count++;
    }
    return 0;
}


