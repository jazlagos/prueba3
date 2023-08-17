//Se quiere transformar temperaturas en grados Fahrenheit a grados centígrados y viceversa.
//Implementar las funciones para convertir la temperatura en grados centígrados en Fahrenheit como un número decimal, utilice esta fórmula para calcular los grados centígrados y retorne el resultado obtenido. Y viceversa.
//float centigrados_a_fahrenheit(float centigrados);
//float fahrenheit_a_centigrados(float fahrenheit);

#include <stdio.h>

float centigrados_a_fahrenheit(float centigrados)
{
    float fahrenheit = 0;
    fahrenheit = (centigrados * 1.8) + 32;
    return fahrenheit;
}

float fahrenheit_a_centigrados(float fahrenheit)
{
    float centigrados = 0;
    centigrados = (fahrenheit-32)/1.8;
    return centigrados;
}

int main()
{
    int opcion = 0;
    float temperatura = 0;
    
    printf("Conversion de centigrados a fahrenheit, ingrese 1\nConversion de fahrenheit a centigrados, ingrese 2\n");
    scanf("%d", &opcion);

    if(opcion == 1)
    {
        printf("Ingresa temperatura a convertir:\n");
        scanf("%f", &temperatura);
        float resultado = centigrados_a_fahrenheit(temperatura);
        printf(" %.2f centigrados equivalea %.2f fahrenheit\n", temperatura, resultado);
    }
    else if(opcion == 2)
    {
        printf("Ingresa temperatura a convertir:\n");
        scanf("%f", &temperatura);
        float resultado = fahrenheit_a_centigrados(temperatura);
        printf("%.2f fahrenheit equivale a %.2f centigrados\n", temperatura, resultado);
    }
    else
    {
        printf("La opcion ingresada es incorrecta\nIngrese la opcion 1 o 2\n");
    }
    return 0;
}
