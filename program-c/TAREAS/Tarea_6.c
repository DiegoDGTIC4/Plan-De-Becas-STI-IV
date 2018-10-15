#include<stdio.h>    //Esto es un programa que te muestra dos numeros y te dice si son iguales o no

int main()
{

float numero1;
float numero2;

printf("Ingrese su primer numero: ");
scanf(" %f", &numero1);

printf("Ingrese su segundo numero: ");
scanf(" %f", &numero2);

if (numero1 == numero2){
	printf("Los numeros son iguales\n");
}

else
 	printf("Los numeros son diferentes\n");

}



