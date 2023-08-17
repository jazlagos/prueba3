//10. Factorial
//Implementar una función que, usando lazos, permita obtener el factorial de un número entero positivo.

//long factorial(int numero):
//El factorial de un entero positivo n, se define como el producto de todos los números enteros positivos desde 1 
//(es decir, los números naturales) hasta n.

//Por ejemplo: 5! = 1×2×3×4×5 = 120

#include <stdio.h>

int factorial(int numero)
{
    int resultado = 1;
    while (numero > 0)
    {
    resultado = (resultado * numero);
    numero--;
    } 
    return resultado;
}
int main()
{
    int numero=0;
    printf("Ingresar un numero para saber su factorial: ");
    scanf("%d", &numero);

    int resultado = factorial(numero);

    if (numero > 0)
    {
        printf("El factorial de %d es: %d\n", numero, resultado);
    }
    else
    {
        printf("El numero ingresado debe ser mayor a 0");
    }
    return 0;
}