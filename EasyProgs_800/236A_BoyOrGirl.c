// A. Boy or Girl
#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%s",c);
    int a = strlen(c), i, j;
    for (i = 0; i < strlen(c); i++)
    {
        for (j = i + 1; j < strlen(c); j++)
        {
            if (c[i] == c[j])
            {
                a--;
                break;
            }
        }
    }
    if(a % 2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}