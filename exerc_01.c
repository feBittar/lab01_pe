// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);
    while (x <= n)
    {
        if (x % 2 == 0)
        {
            printf("%d %s", x, " ");
        }
        x++;
    }

    return 0;
}