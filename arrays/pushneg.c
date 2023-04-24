#include<stdio.h>


void pushneg(int *a, int size);

int main()
{
    int a[]={1, 2, -3, -4, 0, 1, 5};
    int size=sizeof(a)/sizeof(a[0]);
    pushneg(a, size);
    for(int i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void pushneg(int *a, int len)
{
    int j=0, temp;
    for(int i=0;i<len;i++)
    {
        if(a[i]>=0)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
    }
}