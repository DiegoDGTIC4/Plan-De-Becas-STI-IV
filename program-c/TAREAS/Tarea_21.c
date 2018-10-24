#include<stdio.h>

int main(){						// declaracion de variables
int edad = 1;
int i = 0;
int promedio;
int acumulacion = 0;

	

while ( edad > 0 ){				// Ciclo while

	
	printf("Ingrese edad: ");
        scanf("%d", &edad);



if ( edad > 0 ) {

	acumulacion += edad;				// contador

	i++;	
}

}




	promedio =( acumulacion / i );              // Cuando se sale del ciclo

	printf("El promedio es %d\n", promedio);

	
}
	



