#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="This is an example";
    for(int i=0;i<strlen(str);i++)
    {
        if(i==0)
        {
            printf("%c ", str[0]);
        }
        else if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
        {
            printf("%c ", str[i+1]);
        }
    }
    return 0;
}