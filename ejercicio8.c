//*8. Suma en rango
//*Implementar una función que sume los números enteros comprendidos entre dos cotas.
//*Siendo n inclusive y m no inclusive.

#include <stdio.h>

int suma_rango(int n, int m)
{
    int suma = 0;
    int i = 0;
    for(i=n; i<m; i++)
    {
        suma = suma + i;
    }
    return suma;
}

int main()
{
    int n = 0;
    int m = 0;
    printf("Ingresar un numero para definir la cota: ");
    scanf("%d", &n);
    printf("\nIngresar otro numero para definir la cota: "); 
    scanf("%d", &m);

    int sumarango = suma_rango(n, m);
    
    printf("La suma entre las cotas: [%d + %d): %d\n", n,m, sumarango);

    return 0;

}