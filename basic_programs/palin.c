#include<stdio.h>

int check_palin(int n);
int main()
{
    int n;
    printf("Enter any number: \n");
    scanf("%d", &n);
    int ans=check_palin(n);
    if(n==ans)
    {
        printf("The given number is palindrome\n");
    }else{
        printf("The given number is not palindrome\n");
    }
}
int check_palin(int n)
{
    int rem,sum=0;
    while(n)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    return sum;
}