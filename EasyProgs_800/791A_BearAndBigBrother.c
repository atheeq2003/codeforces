//A. Bear and Big Brother
#include <stdio.h>
int main()
{
    int i = 0, a, b, n1, n2;
    scanf("%d%d", &a, &b);
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        i++;
    }
    printf("%d", i);
}