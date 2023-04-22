#include<stdio.h>


int toggle(int a, int b);


int main()
{
        int a, b;
        printf("Enter the number: \n");
        scanf("%d", &a);
        printf("Enter the position\n");
        scanf("%d", &b);
        printf("Thee number after toggling is %d\n", toggle(a, b));
        return 0;
}
int toggle(int a, int b)
{
   a^=(1<<b-1);
   return a;
}