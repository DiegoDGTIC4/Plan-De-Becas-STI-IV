#include<stdio.h>

int main(){


int a;
int b;
int c;
int d;


printf("Diana, Laura y Daniela quieren hacer un triangulo \n");

printf("Ingrese valor de la varilla1: ");
scanf("%d", &a);


printf("Ingrese valor de la varilla2: ");
scanf("%d", &b);


printf("Ingrese valor de la varilla3: ");
scanf("%d", &c);




	if ( a > 0 ){


	if (( a > b-c) || (a < b+c))
	{

	printf("Este es un triangulo\n");

					}
	else
	printf("Este no es un triangulo\n");

	}

	else
	printf("Esto es un numero negativo\n");



}


