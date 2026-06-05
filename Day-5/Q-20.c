// WAP  to find largest prime factor.
#include <stdio.h>

int main()
{
    int n, i, j, largest = 0, flag;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;   // assume i is prime

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;   // not prime
                    break;
                }
            }

            if(flag == 1)
            {
                largest = i;
            }
        }
    }

    printf("Largest prime factor = %d", largest);

    return 0;
}