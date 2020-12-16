// A. Presents
#include <stdio.h>
int main()
{
    int n, p, i;
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &p);
        a[p] = i;
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}