#include<stdio.h>


unsigned int togglerange(unsigned int number, int start, int end);

int main()
{
    int num, st, en;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the start range: ");
    scanf("%d", &st);
    printf("Enter the end range: ");
    scanf("%d", &en);
    printf("The bits after toggling is %u\n", togglerange(num, st, en));
    return 0;
}
unsigned int togglerange(unsigned int number, int start, int end)
{
    unsigned int mask=((1<<(end-start+1))-1)<<start;
        return number^mask;
}