#include<stdio.h>
int main (){
    char s[20], temp;
    int i=0,len=0,count=0;
    printf("enter the string");
    scanf("%[^\n]",s);

    while (s[i]!='\0'){
        len++;
        i++;
    }
    for(i=0; i<len;i++){
        if (s[i]== ' '){
            s[i]=s[i+1];
        }
    }
        printf(" string without space is %s=", s);
    
    return 0;
}