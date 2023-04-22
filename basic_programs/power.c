#include<stdio.h>

int my_pow(int n);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d", &a);
    printf("%d", my_pow(a));
    return 0;
}
int my_pow(int a)
{
    return a*a*a;
}