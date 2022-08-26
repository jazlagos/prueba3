/*
divisiones
Jazmin Daniela Lagos, @jazlagos - 2022
Programacion 1 - Ingenieria en computacion
6. Divisiones
Escribir una función que mediante restas sucesivas, 
obtenga el valor del cociente y el resto de dos números enteros.
pre:ingrear un numero
pos: hallar el cociente y resto de ese numero
*/

#include <stdio.h>

int division(int dividendo,int divisor)
{
   int resto;
   int cociente;
   while (dividendo>=0)
   {
      resto=dividendo-divisor;
      cociente++;
   }
   return cociente;
}


int division_resto(int dividendo,int divisor)
{
   int resto;
   int cociente;
   while(dividendo>=0)
   {
      resto=dividendo-divisor;
      cociente++;
   }
   return resto;
}

int main()
{
   int dividendo;
   int divisor;
   int result;
   int resto;
   printf("ingresar el numero dividendo");
   scanf("%d", &dividendo);
   printf("ingresar el numero divisor");
   scanf("%d", &divisor);
   result= division(dividendo, divisor);
   resto= division_resto(dividendo, divisor);
   printf("el resto es %d y el cociente es %d",resto, result);
   return 0;
}