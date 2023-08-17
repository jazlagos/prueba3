//*7. Números primos
//*Escribir una función que retorne 1 si un número entero indicado es Primo y 0 cuando no lo sea.
//*int es_primo(int numero);
//*Un número es primo cuando sus divisores son solo si mismo y 1.
//*7 que es primo, es divisible por 7 y 1. 8 que no es primo, es divisible por 8 , 4, 2 y 1.


#include <stdio.h>
int es_primo(int numero)
{
    int i;
    for(i=2; i * i <= numero; i++)
    {
        if (numero % i ==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int numero;
    printf("Ingresar un nuemro: ");
    scanf("%d", &numero);

    if (es_primo(numero))
    {
        printf("%d es primo\n", numero);
    }
    else
    {
        printf("%d no es primo\n", numero);
    }
    return 0;
}