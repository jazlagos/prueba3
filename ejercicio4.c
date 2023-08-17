// Comparación de números
//Implementar una función que retorne:

//Retornar -1 si el primero es menor que el segundo
//Retornar 0 si son iguales
//Retornar 1 si el primero es mayor que el segundo
//int compara(int numero, int otro_numero)

#include <stdio.h>
int compara(int numero, int otro_numero)
{
    if(numero < otro_numero)
    {
        return -1;
    }
    else if(numero == otro_numero)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int numero;
    int otro_numero;
    printf("ingresar un numero\n");
    scanf("%d", &numero);
    printf("ingresar otro numero\n");
    scanf("%d", &otro_numero);

    int resultado = compara(numero,otro_numero);

    if (resultado == -1)
    {
        printf("El numero %d es menor a %d", numero, otro_numero);
    } 
    else if(resultado== 0)
    {
        printf("Los numeros ingresados son iguales");
    }
    else
    {
        printf("El numero %d es mayor que %d", numero, otro_numero);
    }
    return 0; 
}