#include<stdio.h>


void bs(int a[], int len);


int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    int a[size];
    for(int i=0;i<size;i++)
    {
            scanf("%d", &a[i]);
    }
    bs(a, size);
    printf("The elements after sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d", a[i]);
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