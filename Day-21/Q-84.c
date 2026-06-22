#include<stdio.h>
#include<string.h>
int main (){
    char s[20];
    int i=0,len=0, v=0, c=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        if (s[i]>= 'a' && s[i] <='z'){
            s[i]= s[i]-32;
        }
        i++;
        }
        printf("upper case is =%s", s);
        return 0;
    }