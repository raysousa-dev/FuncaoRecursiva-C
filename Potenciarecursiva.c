#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}

int main()
{
    int base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("\n%d elevado a %d = %d\n", base, expoente, resultado);

    system("pause");
    return 0;
}