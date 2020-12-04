// A. Calculating Function
#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    x = n / 2 - n % (2 * n);
    printf("%d", x);
}