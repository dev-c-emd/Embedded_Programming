#include<stdio.h>

void replace_str(char *str, int size);

int main()
{
    char name[100]="This is an example";
    int size=sizeof(name)/sizeof(name[0]);
    replace_str(name, size);
    return 0;
}

void replace_str(char *str, int len)
{
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            str[i]='_';
        }
    }
    printf("%s\n", str);
}