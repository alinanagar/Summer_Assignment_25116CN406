#include <stdio.h>
int main()
{
    char s1[20], s2[20];
    int i, j, len1 = 0, len2 = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    while(s1[len1] != '\0')
        len1++;

    while(s2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(s1[i] == s2[j])
            {
                s2[j] = '*';   // mark matched character
                break;
            }
        }

        if(j == len2)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}