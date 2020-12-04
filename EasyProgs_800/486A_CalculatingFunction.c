// A. Calculating Function
#include <stdio.h>
int main()
{
    long long int n,x;
    scanf("%lld", &n);
    x = n / 2 - n % 2 * n;
    printf("%lld", x);
}