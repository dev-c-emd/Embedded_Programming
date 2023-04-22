#include<stdio.h>


int check(int n);


int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    if(check(n))
    {
            printf("The number is odd\n");
    }else
    {
        printf("The number is even\n");
    }
    return 0;
}
int check(int n)
{
    if(n&1)
    {
        return 1;
    }else{
        return 0;
    }
}