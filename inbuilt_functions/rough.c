#include<stdio.h>

int (*fp)();
int func(void){
    printf("Hello\n");
}
int main()
{
    fp=func;
    (*fp)();
    return 0;
}