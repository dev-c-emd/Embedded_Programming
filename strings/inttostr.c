#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void to_string(int num, char *str);
int main()
{
    int num=20;
    char str[20];
    to_string(num, str);
    printf("The integer %d is converted to %s\n", num, str);
    return 0;
}
void to_string(int num, char *str)
{
    int i=0, j=0;
    int sign=0;
    char temp;
    if(num<0)
    {
        sign=1;
        num=-num;
    }
    while(num!=0)
    {
        str[i++]=num%10+'0';
        num/=10;
    }
    if(sign)
    {
        str[i++]='-';
    }
    str[i]='\0';
    for(j=0;j<i/2;j++)
    {
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
}

