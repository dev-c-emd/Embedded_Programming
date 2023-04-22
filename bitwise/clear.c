#include<stdio.h>

int clear(int a, int b);
int main()
{
    int a, b;
    printf("Enter the number: \n");
    scanf("%d", &a);
    printf("Enter the position to clear\n");
    scanf("%d", &b);
    printf("After clearing the bit is %d\n", clear(a, b));
    return 0;
}
int clear(int a, int b)
{
    a&=~(1<<b-1);
    return a;
}