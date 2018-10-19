#include<stdio.h>

int main()
{

int numero;
int factorial = 1;
int contadorf;

printf("Este bello programa te calculara un numero factorial\n");

printf("Ingrese su numero: ");
scanf(" %d", &numero);

if(numero > 13){

	printf("Este numero es muy largo\n");

}

else {



for(contadorf = 1; contadorf <= numero; contadorf ++){

		factorial = factorial * contadorf;

}

printf("Su numero factorial es : %d\n",factorial);

}

}

