#include<stdio.h>			// Este es un porgrama que te saca uan ecuacion de segundo grado
#include<math.h>

int main(){
					// Definiendo las variables
float a;
float b;
float c;
float y;
float x1;
float x2;
                                       // Poniendo los printf
printf("Ingrese el valor1: ");
scanf(" %f", &a);

printf("Ingrese el valor2: ");
scanf(" %f", &b);

printf("Ingrese el valor3: ");
scanf(" %f", &c);



y = sqrt((b*b)-4*a*c);			//Realizando las operaciones
x1 = (-b+y) / (2*a);
x2 = (-b-y) / (2*a);

printf("Los valores de x1 y x2 son: %f y %f\n" ,x1,x2);


}


