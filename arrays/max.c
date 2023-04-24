#include<stdio.h>


int max(int *a, int size);

int main()
{
    int a[]={1, 2, 3, 4, 5};
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d\n", max(a, len));
    return 0;
}
int max(int *a, int len)
{
    int max=a[0];
    for(int i=0;i<len;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}