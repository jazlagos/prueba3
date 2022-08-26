/*
factorial
Jazmin Daniela Lagos, @jazlagos - 2022
Programacion 1 - Ingenieria en computacion
10. Factoriales
Desarrollar un programa obtener el factorial de un número entero.
*/
//*me da siempre 1*//
#include <stdio.h>

int factorial(int numero)
{
   int facto=1;
   int cc;
   for (cc = 1 ; cc <= numero; cc++)
   {
   facto = facto * cc;
   }
   return facto;
   }

int main()
{
   int numero;
   int fact;
   printf("ingresar un numero para ver su factorial \n");
   scanf("$d", &numero);
   fact = factorial(numero);
   printf("el factorial es %d", fact);
   return 0;
}