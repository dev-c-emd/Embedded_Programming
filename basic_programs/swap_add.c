#include<stdio.h>


int main()
{
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping is %d%d\n", a, b);
    return 0;
}