#include<stdio.h>


int main()
{
    int a, b, temp;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("The numbers after swapping is %d %d\n", a, b);
    return 0;
}