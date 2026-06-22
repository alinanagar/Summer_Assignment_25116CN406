#include<stdio.h>
int main (){
    char s[20], temp, mf=0;
    int i=0,len=0,freq=0,j=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        len++;
        i++;
    }
    for (i=0; i<len; i++){
        freq=0;
        for (j=0; j<len;j++){
            if (s[i]==s[j]){
                freq++;
            }
        }
        if (freq>mf){
            mf=s[i];
    }

}
printf("maximum occuring character is %c", mf);

    return 0;
}