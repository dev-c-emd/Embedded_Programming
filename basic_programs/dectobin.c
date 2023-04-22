#include<stdio.h>


void dectobin(int n);


int main()
{
    int n;
    printf("Enter the decimal number\n");
    scanf("%d", &n);
    dectobin(n);
    return 0;
}
void dectobin(int n)
{
    int i=0, bin[32];
    while(n>0)
    {
        bin[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d", bin[j]);
    }
    printf("\n");
}
