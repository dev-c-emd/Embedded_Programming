#include<stdio.h>

int fibose(int n);
int main()
{
    fibose(5);
    return 0;
}
int fibose(int n)
{
    int a=0, b=1, next;

    for(int i=0;i<=n;i++)
    {
        printf("%d ", a);
        next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
    return 0;
}