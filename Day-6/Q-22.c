#include <stdio.h>

int main()
{
    int binary, digit;
    int decimal = 0;
    int p = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * p;
        p = p * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}