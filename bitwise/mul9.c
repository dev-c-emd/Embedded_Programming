#include<stdio.h>


int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    n=(n<<3)+n;
    printf("The number multiply with given is %d\n", n);
    return 0;
}