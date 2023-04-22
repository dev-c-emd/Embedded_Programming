#include<stdio.h>
#include<math.h>

int bintodec(int n);
double my_pow(double x, int y);
int main()
{
        int a;
        printf("Enter the binary number:\n");
        scanf("%d", &a);
        printf("The decimal number is %d\n", bintodec(a));
        return 0;
}
int bintodec(int n)
{
    int r, i=0, sum=0;;
    while(n>0)
    {
        r=n%10;
        sum+=r*my_pow(2, i);
        n/=10;
        i++;
    }
    return sum;
}
double my_pow(double a, int b)
{
    double result=1;
    for(int i=1;i<=b;i++)
    {
        result*=a;
    }
    return result;
}