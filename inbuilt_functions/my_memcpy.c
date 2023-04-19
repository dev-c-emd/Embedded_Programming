#include<stdio.h>

void my_memcpy(char *dest, char *src);
int main()
{
    char one[]="charan";
    char two[100];
    my_memcpy(two, one);
    printf("%s", two);
    return 0;
}
void my_memcpy(char *dest, char *src)
{
    while(*src!='\0')
    {
        *src++=*dest++;
    }
    *dest='\0';
}