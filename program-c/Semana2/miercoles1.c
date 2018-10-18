#include<stdio.h>

int main(){

int numero[5];
int contador;


	printf("Ingrese un maximo de seis numeros\n");
	for(contador = 0; contador <= 5; contador = contador +1)
	{ 	
		printf("Ingrese el entero # %d: ", contador = contador + 1);
		 scanf("%d", &numero[contador]);
		

	}


	printf("Tu numero fue: \n");

	for(contador = 0 ; contador <= 5; contador = contador +1)

	{

	printf("%d", numero[contador]);


	}


}
