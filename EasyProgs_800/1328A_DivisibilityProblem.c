// A. Divisibility Problem
#include <stdio.h>
int main()
{
    int i, n, a, b, r, m;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        m = a % b;
        if (m == 0)
        {
            printf("%d\n", m);
        }
        else
        {
            r = b - a % b;
            printf("%d\n", r);
        }
    }
}