//A. Domino piling
#include <stdio.h>
int main()
{
    /* r1: product of m and n
       fr: result */
    int m, n, r1, fr;
    scanf("%d %d", &m, &n);
    r1 = m * n;
    fr = r1 / 2;
    printf("%d", fr);
    return 0;
}