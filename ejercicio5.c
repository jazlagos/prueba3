//5. Suma lenta
//Implementar una función que haga la suma entre dos números enteros sin hacer la operación de manera directa. 
//Esto quiere decir que para hacer la suma entre 4 y 3, las operaciones resultantes deberán ser 4+1+1+1.

//La función debe ser capaz de sumar cualquier número entero, positivo y negativo.


#include <stdio.h>

int suma_lenta(int numero, int otro_numero)
{
    int resultado = 0;
    resultado = numero + otro_numero;
    printf("%d", numero);
    while(numero < resultado)
    {
        int s_lenta=1;
        printf("+ %d", s_lenta);
        numero = numero + 1;
    }
    return resultado;
}

int main()
{
    int numero = 0;
    int otro_numero = 0;

    printf("Ingresar un numero: ");
    scanf("%d", &numero);

    printf("Ingresar otro numero: ");
    scanf("%d", &otro_numero);

    int resultado = suma_lenta(numero,otro_numero);
    
    printf(" = %d", resultado);
    return 0;
}