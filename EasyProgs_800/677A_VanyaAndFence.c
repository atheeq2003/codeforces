//A. Vanya and Fence
#include <stdio.h>
int main()
{
    int n, h, a, i, sum = 0;
    scanf("%d%d", &n, &h);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a <= h)
        {
            sum = sum + 1;
        }
        else
            sum = sum + 2;
    }
    printf("%d", sum);
}