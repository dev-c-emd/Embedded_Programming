#include<stdio.h>


int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*
54321
5432
543
54
5
*/