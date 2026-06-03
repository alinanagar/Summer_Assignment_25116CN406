//WAP to print prime numbers in a range.
#include <stdio.h>

int main()
{
    int start, end, n, i, flag;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    for(n = start; n <= end; n++)
    {
        if(n < 2)
            continue;

        flag = 0;

        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", n);
    }

    return 0;
}