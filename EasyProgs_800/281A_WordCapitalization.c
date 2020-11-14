//A. Word Capitalization
#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    word[0]=toupper(word[0]);
    puts(word);   
}