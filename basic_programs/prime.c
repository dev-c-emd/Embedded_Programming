#include<stdio.h>



int checkprime(int n);

int main()
{
        int a;
        printf("Enter the number: \n");
        scanf("%d", &a);
        if(checkprime(a))
        {
            printf("The number is prime\n");
        }else{
            printf("The number is not a prime\n");
        }
}
int checkprime(int n)
{
    int isprime=0;
    if(n==1)
    {
        printf("The given number is prime number\n");
    }
    for(int i=2;i<n/2;++i)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}