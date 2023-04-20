#include<stdio.h>


int arr(int a[], int size);
int main()
{
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    arr(a, size);
    return 0;
}
int arr(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}