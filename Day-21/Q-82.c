#include<stdio.h>
#include<string.h>
int main (){
    char s[20], temp;
    int i=0,len=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        len++;
        i++;
    }
    for (i=0; i<len/2; i++){
        temp= s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
    printf("reversed string is %s", s);
    return 0;
}
    