#include<stdio.h>

char *my_strstr(const char *str1, const char *str2);
int main()
{
        char name[1000]="This is an example";
        char substring[500]="ant";
        char *res;
        res = my_strstr(name, substring);
        if(res)
        {
            printf("sub string is found\n");
        }else{
            printf("Sub string is not found\n");
        }
        return 0;
}
char *my_strstr(const char *str1, const char *str2)
{
    const char *p1, *p2;
    if(!*str2)
    {
        return (char*)str1;
    }
    while(*str1)
    {
        p1=str1;
        p2=str2;
        while(*p1&&*p2&&(*p1==*p2))
        {
            p1++;
            p2++;
        }
        if(!*p2)
        {
            return (char*)str1;
        }
        str1++;
    }
    return NULL;
}