//A. Way Too Long Words
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int n, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%s", a);
        b = strlen(a);
        if (b > 10)
        {
            printf("%c%d%c\n", a[0], b - 2, a[b - 1]);
        }
        else
        {
            printf("%s\n",a);
        }
    }
    return 0;
}