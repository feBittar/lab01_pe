// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>

int isPrimo(int n)
{
    int k;

    for (k = 2; k <= n - 1; k++)
        if (n % k == 0)
            return 0;
    return 1;
}
int main()
{
    int n;
    printf("%s","Digite um numero: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        if (isPrimo(i))
            printf("%d %s", i, "\n");
    
    return 0;
}