#include<stdio.h>


void bs(int a[], int len);


int main()
{
   
    int a[]={64, 25, 12, 22, 11};
    int size=sizeof(a)/sizeof(a[0]);
    bs(a, size);
    printf("The elements after sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void bs(int a[], int len)
{
    int temp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
           if(a[j]>a[j+1])
           {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
        }
    }
}