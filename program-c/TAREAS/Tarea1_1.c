#include<stdio.h>    //Esto es un nuevo comentario

int main(){
int numero,numero2,resultado;

printf("Ingrese el valor1:");
scanf("%d", &numero);

printf("Ingrese el valor2:");
scanf("%d", &numero2);

resultado = numero + numero2;

printf("La suma de los numeros es: %d\n",resultado);

resultado = numero - numero2;

printf("La resta  de los numeros es: %d\n",resultado);

resultado = numero * numero2;

printf("La multiplicacion  de los numeros es: %d\n",resultado);

resultado = numero / numero2;

printf("La división  de los numeros es: %d\n",resultado);

resultado = numero % numero2;

printf("El modulo  de los numeros es: %d\n",resultado);

}
