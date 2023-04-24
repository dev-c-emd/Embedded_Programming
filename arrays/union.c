#include<stdio.h>

int size(int a[]);
int union_arr(int *ar, int *br, int x, int y);
int main()
{
        int a[]={1, 2, 3, 4};
        int b[]={3, 4, 5, 6};
        int len1=sizeof(a)/sizeof(a[0]);
        int len2=sizeof(b)/sizeof(b[0]);
        union_arr(a, b, len1, len2);
        return 0;
}
int union_arr(int *ar, int *br, int a, int b)
{
    int flag=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
            }
        }
    if(flag==0)
    {
        printf("%d", b[i]);
    }
    flag=0;
    }
    return 0;

}