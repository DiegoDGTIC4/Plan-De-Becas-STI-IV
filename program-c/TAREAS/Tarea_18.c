#include<stdio.h>

int main()

{

int numero1;					// Definir variables
int numero2;
int suma = 0;
int i;

printf("Ingrese el valor 1: ");                 // prints
scanf("%d",&numero1);

printf("Ingrese el valor 2: ");
scanf("%d",&numero2);

if ( numero1 > numero2){

	for ( i = numero2; i <= numero1; i++){       // ciclo for

	printf("%d", i);
	printf("\n\n");


	suma += i;                                 // acumulador suma

    	}


		printf("La suma de los numeros es: %d\n", suma);

}

else

	if (numero1 < numero2) {

	for ( i = numero1; i <= numero2; i++){


	printf("%d", i);
        printf("\n\n");


	suma += i ;


	}


		printf("La suma de los numeros es: %d\n", suma);
}



}
	











