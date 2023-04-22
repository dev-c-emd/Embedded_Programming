#include<stdio.h>

int fibo(int a);
int main()
{
    int n;
    printf("Enter any number: \n");
    scanf("%d", &n);
    printf("The fibonacci numbers is %d\n", fibo(n));
}
int fibo(int var)
{
    if(var<=1)
    {
        return 1;
    }else{
        return fibo(var-1)+fibo(var-2);
    }
}