#include<stdio.h>
#include<string.h>
int main (){
    char s[20];
    int i=0,len=0, v=0, c=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        len++;
        i++;
    }
    for (i=0;i<len; i++){
        if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| 
            s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
            {
                v++;
            }
        else{
            c++;
        }
    }

    printf("no of vowel are %d\n", v);
    printf("no of consonents are %d", c);

    return 0;
}