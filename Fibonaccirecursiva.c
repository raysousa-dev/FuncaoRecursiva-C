#include <stdio.h>
#include <stdlib.h>
 
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
 
    if (n == 1)
    {
        return 1;
    }
 
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
int main()
{
    int numero, i;
 
    printf("Digite quantos termos deseja ver: ");
    scanf("%d", &numero);
 
    printf("\nSequencia: ");
    for (i = 0; i < numero; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
 
    system("pause");
    return 0;
}