#include<stdio.h>

void* memset(void* ptr, int value, size_t num);
int main()
{
    char name[200]="saicharan";
    memset(name, '#', 3);
    printf("%s\n", name);
    return 0;
}
void* memset(void* ptr, int value, size_t num)
{
    unsigned char* p=ptr;
    while(num--)
    {
        *p++=(unsigned char)value;
    }
    return ptr;
}