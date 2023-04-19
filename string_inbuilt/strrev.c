#include<stdio.h>

void string_rev(char *string);
int main()
{
    char name[100]="enod";
    string_rev(name);
    printf("The string after reverse is %s\n", name);
    return 0;
}
void string_rev(char *string)
{
    int len=0;
    while(string[len]!='\0')
    {
        len++;
    }
    for(int i=0;i<len/2;i++)
    {
        char temp=string[i];
        string[i]=string[len-i-1];
        string[len-i-1]=temp;
    }
}