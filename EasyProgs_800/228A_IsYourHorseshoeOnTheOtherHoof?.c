// Is your horseshoe on the other hoof?
#include <stdio.h>
int main()
{
    int c1, c2, c3, c4, r=0;
    scanf("%d%d%d%d", &c1, &c2, &c3, &c4);
    if (c1 == c2 || c1 == c3 || c1 == c4)
    {
        r++;
    }
    if (c2 == c3 || c2 == c4)
    {
        r++;
    }
    if (c3 == c4)
    {
        r++;
    }
    printf("%d", r);
    return 0;
}