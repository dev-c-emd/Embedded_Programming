#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int my_atoi(char *str);

int main()
{
    char a[10];
    printf("Enter the string: ");
    scanf("%s", a);
    printf("The number is converted to integer is %d\n", my_atoi(a));
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
        }else{
            printf("Invlaid input\n");
            exit(1);
        }
    }
    return num*sign;
}