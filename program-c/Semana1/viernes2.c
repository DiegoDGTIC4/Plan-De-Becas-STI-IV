#include<stdio.h>			//Esto es una calculadora en c

int main(){

int calculadora; 
float numero1;
float numero2;
float resultado;

printf("Ingrese el primer numero:");
scanf(" %f", &numero1);

printf("Ingrese el segundo numero:");
scanf(" %f", &numero2);

printf("1 = suma\n");
printf("2 = resta\n");
printf("3 = multiplicacion\n");
printf("4 = division\n");
scanf(" %d",&calculadora);

	switch(calculadora){

case 1:

	resultado = numero1 + numero2;
	break;

case 2:

	resultado = numero1 - numero2;
	break;

case 3:

	resultado = numero1 * numero2;
	break;

case 4:

	resultado = numero1 /  numero2;
	break;

default:
	printf(" Este no es un numero\n");
	break;
}

printf("El resultado es:  %f",resultado);

}

		



