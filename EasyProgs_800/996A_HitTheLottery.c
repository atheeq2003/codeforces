// A. Hit The Lottery
#include <stdio.h>
int main()
{
    int n, r, a, b, c, d,bills;
    scanf("%d", &n);
    r = n / 100;
    a = n % 100 / 20;
    b = n % 20 / 10;
    c = n % 10 / 5;
    d = n % 5;
    bills = r + a + b + c + d;
    printf("%d", bills);
}