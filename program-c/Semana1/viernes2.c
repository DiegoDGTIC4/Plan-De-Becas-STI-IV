#include<stdio.h>			//Esto es una calculadora en c

int main(){

char calculadora; 
float numero1;
float numero2;
float resultado;

printf("Ingrese el primer numero:");
scanf(" %f", &numero1);

printf("Ingrese el segundo numero:");
scanf(" %f", &numero2);

printf("a = suma\n");
printf("b = resta\n");
printf("c = multiplicacion\n");
printf("d = division\n");
scanf(" %c",&calculadora);

	switch(calculadora){

case 'a':

	resultado = numero1 + numero2;
	break;

case 'b':

	resultado = numero1 - numero2;
	break;

case 'c':

	resultado = numero1 * numero2;
	break;

case 'd':

	resultado = numero1 /  numero2;
	break;

default:
	printf(" Este no es un numero\n");
	break;
}

printf("El resultado es: %f\n",resultado);

}

		



