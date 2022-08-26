/*
palindromo
Jazmin Daniela Lagos, @jazlagos - 2022
Programacion 1 - Ingenieria en computacion
8. Palíndromo
Escribir una función que indique con True si una palabra o 
frase ingresada se trata de un palíndromo. Palíndromo, 
es si se lee igual de derecha a izquierda que de izquierda a derecha.
pre: ingresar frase o palabra 
pos: ver si se lee igual de izquierda a derecha
*/

#include<stdio.h>
#include<string.h>

int main()
{
 char palabra[100];
 int a,b,c;
   printf("ingresa una frase rapa saber si es palindromo \n");
   scanf("%s" , palabra);
   a=strlen(palabra);
   a=a-1;
 for(b=0,c=a;b<=a/2;)
   if(palabra[b]==palabra[c])
   printf("TRUE");
   else
   printf("FALSE");
}
