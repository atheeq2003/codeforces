//A. Nearly Lucky Number
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], i, n = 0;
    scanf("%s", str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            n++;
        }
    }
    if (n == 4 || n == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}