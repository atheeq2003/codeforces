// A. In Search of an Easy Problem
#include <stdio.h>
int main()
{
    int i, x,n,y=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        y = y + x;
    }
    if (y == 0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
    return 0;
}