#include<stdio.h>

int main()
{
    int a[20], n, i, j, flag;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array after removing duplicates:\n");

    for(i=0; i<n; i++)
    {
        flag = 0;

        for(j=0; j<i; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}