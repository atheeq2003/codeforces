// A. Next Round
#include <stdio.h>
int main()
{
    int a[1000],count=0, i, n, k;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        if (a[i] >= a[k - 1] && a[i] > 0)
            count++;
    }
    printf("%d",count);
return 0;

}