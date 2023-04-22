#include<stdio.h>
#include<string.h>

void rev(char *str, int start, int end);
int main()
{
    char name[100];
    printf("Enter any name: \n");
    scanf("%s", name);
    rev(name, 0, strlen(name)-1);
    printf("%s\n", name);
    return 0;
}
void rev(char *str, int start, int end)
{
    if(start>=end)
    {
        return;
    }
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    rev(str, start+1, end-1);
}