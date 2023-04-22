#include<stdio.h>
#include<string.h>

void str_cat(char *str1, char *str2);
int main()
{
    char fname[100];
    printf("Enter the first string: \n");
    scanf("%s", fname);//="charan";
    char sname[100];
    printf("Enter the second name: \n");
    scanf("%s", sname);//="sai";
    str_cat(fname, sname);
    printf("The concatinated string is %s\n", fname);
    return 0;
}
void str_cat(char *str1, char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len2;i++)
    {
        str1[len1+i]=str2[i];
    }
    str1[len1+len2]='\0';
}