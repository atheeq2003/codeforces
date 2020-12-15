// A. Magnets
#include <stdio.h>
int main()
{
    int i, n, a = 0, r=0;
    scanf("%d", &i);
    while (i--)
    {
        scanf("%d", &n);
        if (n != a)
            r++;
        a = n;
    }
    printf("%d", r);
}