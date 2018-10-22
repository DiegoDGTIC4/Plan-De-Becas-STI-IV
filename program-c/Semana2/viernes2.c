#include<stdio.h>
#include<stdlib.h>
#include<time.h>
					// declarar numeros aleatorios

int main(){

int arreglo[4];
int i;


srand(time(NULL));

	for( i = 0; i <= 4;  i++){

	arreglo[i] = (rand() % 6) +1;

}

	 for( i = 0; i <= 4;  i++ ){


	printf("Su #%d aleatorio  es %d\n", i+1, arreglo[i]);

	

}


}
