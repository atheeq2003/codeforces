#include <stdio.h>
#include<string.h>
int main()
{
    int color = 0, i, n;
    char a[n + 1];
    scanf("%d", &n);
    scanf("%s", a);
    for (i = 1; i < n; ++i)
    {
        if (a[i] == a[i - 1])
            color++;
    }

    printf("%d\n", color);
}