#include<stdio.h>


char *my_strcpy(char *dest, char *src)
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}
int main()
{
    char source[]="charan";
    char destination[100];
    my_strcpy(destination, source);
    printf("%s\n", destination);
    return 0;
}