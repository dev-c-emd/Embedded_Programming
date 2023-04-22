#include <stdio.h>

void decToHex(int decimalNum)
{
    char hexNum[100];
    int i = 0, remainder;
    while (decimalNum != 0) {
        remainder = decimalNum % 16;
        if (remainder < 10)
            hexNum[i] = remainder + 48;
        else
            hexNum[i] = remainder + 55;
        i++;
        decimalNum /= 16;
    }
    //printf("Hexadecimal representation of %d i", decimalNum);
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexNum[j]);

        printf("\n");
}

int main()
{
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    decToHex(decimalNum);
    return 0;
}
