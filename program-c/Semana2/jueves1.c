#include<stdio.h>

int suma(int x, int y){
			return (x + y);
			}

int resta(int x, int y){
			return(x - y);
			}

int multiplicacion(int x, int y){

			return(x * y);
			}			


int division (int x, int y){
			return(x / y);
			}


int main (){

	int c, a, b;

	printf("Este programa te va a calcular la suma, resta, multiplicacion y division\n");



	printf("Ingrese un numero ");
	scanf("%d", &a);


	printf("Ingrese un numero ");
        scanf("%d", &b);


	c = suma(a, b);
	printf("El resultado es: %d\n", c);

	 c = resta(a, b);
        printf("El resultado es: %d\n", c);


	 c = multiplicacion(a, b);
        printf("El resultado es: %d\n", c);

	 c = division(a, b);
        printf("El resultado es: %d\n", c);




	}





