//9. Múltiplos de
//Escribir una función que retorne 1 si un número entero es múltiplo de otro, utilizando sumas y restas.

#include <stdio.h>

int es_multiplo( int numero, int multiplo)
{
    int suma = numero;
    int resta = multiplo;
    while (suma < multiplo)
    {
        suma = suma + numero;
    }
    while (resta > 0)
    {
        resta = resta - numero;
    }
    if (suma == multiplo && resta == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero;
    int multiplo;
    printf("Ingresar numero: ");
    scanf("%d", &multiplo);
    printf("Ingresar otro numero: ");
    scanf("%d", &numero);
    int esmultiplo = es_multiplo(numero, multiplo);

    if (esmultiplo == 1)
    {
        printf("%d es múltiplo de %d", multiplo, numero);
    }
    else
    {
        printf ("%d no es múltiplo de %d", multiplo, numero);
    }
    return 0;
}
