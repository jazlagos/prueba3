//*11. Contador circular
//*Implementar una función que dado un número entero y un límite, retorne el número incrementado en 1 hasta el límite.
//*Cuando i == limite, la función retornará 0.

#include <stdio.h>

int contador_circular(int i, int limite)
{
    int contador = 0;
        if( i == limite)
        {
            return 0;
        }
        else
        {
            contador = (i + 1) % (limite + 1);
        }
    return contador;
}

int main()
{
    int limite = 0;
    int i = 0; 
    printf("ingresar un numero: ");
    scanf("%d", &i);

    printf("Imngresar limite: ");
    scanf("%d", &limite);

    int contador = contador_circular(i, limite);

    printf("El resutlado del contador circualr es: %d", contador);

    return 0;
}