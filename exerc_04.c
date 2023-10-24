// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

void produto_hadamard(double u[100], double v[100], double resultado[100])
{
    for (int i = 0; i < 100; i++)
    {
        resultado[i] = u[i] * v[i];
    }
}

int main()
{
    double u[100], v[100], resultado[100];
    int n = 0;
    while (n > 100 || n < 1)
    {
        printf("%s", "digite um numero entre 1 e 100: ");
        scanf("%d", &n);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s", "digite um numero: ");

        scanf("%lf", &u[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s", "digite um numero: ");

        scanf("%lf", &v[i]);
    }

    produto_hadamard(u, v, resultado);

    for (int i = 0; i < n; i++)
        printf("%lf %s", resultado[i], " ");

    return 0;
}