// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

void le_vetor(int entrada[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s", "Digite o ", i + 1, " valor do vetor\n");
        scanf("%d", &entrada[i]);
    }
};

int minimo(int v[], int n)
{
    int min = v[0];
    for (int i = 0; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
};
int maximo(int v[], int n)
{
    int max = v[0];
    for (int i = 0; i < n; i++)
        if (v[i] > max)
            max = v[i];
    return max;
};
double media(int v[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];
    double med = (double)sum / n;
    return med;
};

int main()
{
    int n;
    printf("%s", "Quantos numeros terao no array?\n");
    scanf("%d", &n);
    int array[n];
    le_vetor(array, n);

    int min, max;
    double med;

    min = minimo(array, n);
    max = maximo(array, n);
    med = media(array, n);

    printf("%s %d %s %d %s %.2lf", "Minimo: ", min, "Maximo: ", max, "Media: ", med);
    return 0;
}