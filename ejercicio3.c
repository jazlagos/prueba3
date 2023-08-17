//Implementar una función que reciba un número entero e indique si el mismo es positivo, negativo o cero.

//int signo(int numero);
//Retornar -1 si es negativo.
//Retornar 0 si es cero.
//Retornar 1 si es positivo.

#include <stdio.h>
int signo(int numero)
{
     if(numero > 0)
    {
        return 1;
    }
    else if (numero < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero;
    printf("ingresar un numero entero para saber si es positivo, negativo o cero. \n");
    scanf("%d", &numero);

    int resultado = signo(numero);
    
    if (resultado == 1)
    {
        printf("El numero ingresado es positivo");
    }
    else if(resultado == -1)
    {
        printf("El nuemro ingresado es negativo");
    }
    else
    {
        printf("El numero ingresado es cero");
    }
    return 0;
}

