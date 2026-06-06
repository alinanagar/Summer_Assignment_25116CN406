#include <stdio.h>

int main()
{
    int n, rem, binary = 0, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 2;
        binary = binary + rem * p;
        p = p * 10;
        n = n / 2;
    }

    printf("Binary = %d", binary);

    return 0;
}