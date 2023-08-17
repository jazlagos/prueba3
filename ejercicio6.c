//6. Divisiones
//Escribir una función que, mediante restas sucesivas, 
//obtenga el valor del cociente y el resto de dos números enteros.

#include <stdio.h>
int division_lenta(int dividendo, int divisor)
{
    int resto = 0;
    resto = dividendo;
    while(resto >= divisor)
    {
        resto = resto - divisor;
    }
    return resto;
}

int cociente_lento(int dividendo, int divisor)
{
    int cociente = 0;
    while(dividendo >= divisor)
    {
        dividendo = dividendo - divisor;
        cociente = cociente + 1;
    }
    return cociente;
}

int main()
{
    int dividendo = 0;
    int divisor = 0;

    printf("Ingresar el dividendo: ");
    scanf("%d", &dividendo);

    printf("Ingresar el divisor: ");
    scanf("%d", &divisor);

    int resultado = division_lenta(dividendo, divisor);
    int resultado_cociente = cociente_lento(dividendo, divisor);

    printf("\nResto %d\nCociente %d", resultado, resultado_cociente);

    return 0;
}