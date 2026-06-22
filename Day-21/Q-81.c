#include<stdio.h>
#include<string.h>
int main (){
    char s[20];
    int i=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        i++;
    }
    
    printf("the length of the string is %d", i);
    return 0;
}