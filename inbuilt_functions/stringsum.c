#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int my_atoi(char *str);

int main()
{
    char a[100];
    char b[100];
    printf("Enter the first number: \n");
    scanf("%s", a);
    printf("Enter the second number: \n");
    scanf("%s", b);
    int len1=strlen(a);
    int len2=strlen(b);
    int num=my_atoi(a)+my_atoi(b);
    char *res=(char*)malloc(sizeof(char)*(len1>len2?len1+1:len2+1));
    sprintf(res, "%d", num);
    printf("The sum of two numbers is %s\n", res);
    return 0;
}
int my_atoi(char *str)
{
    int len=strlen(str);
    int sign=1, num=0;
    if(str[0]=='-')
    {
        sign=-1;
        str++;
        len--;
    }
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            num=num*10+(str[i]-'0');
        }
    }
    return num*sign;

}