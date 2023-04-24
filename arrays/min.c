#include<stdio.h>

int find_min(int *a, int len);
int main()
{
    int a[]={1, 2, 3, 5};
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d", find_min(a, len));
    return 0;
}

int find_min(int *a, int len);
{
    int min=a[0];
    for(int i=1;i<len;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}