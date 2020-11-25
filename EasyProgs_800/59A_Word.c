// A.Word
#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    int i,c=0;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    if(s[i]<'a')
    c++;
    printf("%s",c>strlen(s)/2?strupr(s):strlwr(s));
}