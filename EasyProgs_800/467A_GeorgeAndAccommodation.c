//A. George and Accommodation
#include <stdio.h>
int main()
{
    int i, n, p, q, r = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &p, &q);
        if (q - p >= 2)
        {
            r++;
        }
    }
    printf("%d", r);
}