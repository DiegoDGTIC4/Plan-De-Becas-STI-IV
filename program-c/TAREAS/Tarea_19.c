#include<stdio.h>

int main(){

int  i;
int Pnumero = 0;
int Snumero = 1;
int sig;
int numero;

printf("Introduzca un numero: ");
scanf(" %d", &numero);

if ( numero >= 46 || numero <= 0 ){

	printf("Este programa no puede sacar este número\n");

}

else

for ( i = 1; i <= numero; i = i + 1 )

{

	printf("%d\n", Pnumero);
	sig = Pnumero + Snumero;
	Pnumero = Snumero;
	Snumero = sig;

}  

}
