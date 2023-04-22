#include<stdio.h>

int arm(int n);
int main()
{
    int a, temp;
    printf("Enter the number: \n");
    scanf("%d", &a);
    temp=arm(a);
    //printf("%d\n", temp);
    if(temp==a)
    {
        printf("The given number is armstrong number\n");
    }else
    {
        printf("The given number is not armstrong number\n");
    }
    return 0;
}
int arm(int n)
{
    int rem, sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    return sum;
}