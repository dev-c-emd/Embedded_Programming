#include<stdio.h>
#define my_sizeof(n) ((char*)(&n+1))-((char*)(&n))

int main()
{
    int n;
    printf("Enter any number: \n");
    scanf("%d", &n);
    printf("The size is %ld\n", my_sizeof(n));
    return 0;
}