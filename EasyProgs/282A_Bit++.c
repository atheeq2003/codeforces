//A. Bit++
#include <stdio.h>
int main()
{
    int n,i, x = 0;
    char a[10];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", a);
        if (a[1] == '+')
            x++;
        else
            x--;
    }
    printf("%d\n", x);
    return 0;
}