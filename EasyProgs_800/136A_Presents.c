// A. Presents
#include <stdio.h>
int main()
{
    int n, p, i;
    int a[n];
    scanf("%d", &n);
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