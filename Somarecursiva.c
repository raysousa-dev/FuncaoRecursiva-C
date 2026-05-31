#include <stdio.h>
#include <stdlib.h>

int soma(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + soma(n - 1);
}

int main()
{
    int numero, resultado;

    printf("Digite o valor de N: ");
    scanf("%d", &numero);

    resultado = soma(numero);

    printf("\nA soma de 1 ate %d = %d\n", numero, resultado);

    system("pause");
    return 0;
}