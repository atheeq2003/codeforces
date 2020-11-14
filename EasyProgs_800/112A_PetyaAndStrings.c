//A. Petya and Strings
#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int x;
scanf("%s%s",a,b);
x = strcasecmp(a,b);
printf("%d",x);
} 