// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

int celToFahr(int n)
{
    int res = (n * (9 / 5)) + 32;
    return res;
}

int fahrToCel(int n)
{
    int res = 5 * (n - 32) / 9;
    return res;
}

int main()
{
    int n, t;
    printf("%s", "Para fazer a conversao de celsius para fahrenheit digite 0, para o contrário digite 1:");
    scanf("%d", &n);
    printf("%s", "\n Digite agora a temperatura que deseja converter: ");
    scanf("%d", &t);
    if (n == 0)
    {
        int res = celToFahr(t);
        printf("%d", res);
    }
    if (n == 1)
    {
        int res = fahrToCel(t);
        printf("%d", res);
    }

    return 0;
}