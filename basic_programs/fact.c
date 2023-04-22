#include<stdio.h>

int fact(int n);
int main()
{
        int a;
        printf("Enter any number\n");
        scanf("%d", &a);
        printf("The factorial of given number is %d\n", fact(a));
        return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }else{
        return n*fact(n-1);
    }
}