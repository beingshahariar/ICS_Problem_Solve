#include<stdio.h>

int main()
{
    int a,n,result = 1;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        result = result*a;
    }

    printf("%d\n",result);
    return 0;
}
