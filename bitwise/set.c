#include<stdio.h>

int set(int n, int pos);
int main()
{
    int a, b;
    printf("Enter the number: \n");
    scanf("%d%d", &a, &b);
    printf("After setting the bit is %d\n", set(a, b));
    return 0;   
}
int set(int n, int pos)
{
    n|=(1<<pos-1);
    return n;
}