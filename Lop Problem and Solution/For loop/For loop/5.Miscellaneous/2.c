#include<stdio.h>

int  main()
{
    int n,r, fact_n = 1, fact_nr = 1, nPr = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    for(int i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }

    for(int i = 1; i <= (n-r); i++)
    {
        fact_nr = fact_nr * i;
    }

    nPr = fact_n/fact_nr;

    printf("%d\n",nPr);
    return 0;
}

