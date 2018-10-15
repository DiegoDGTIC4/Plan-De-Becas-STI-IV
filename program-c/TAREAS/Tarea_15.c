#include<stdio.h>

int main()
{

float b;
float a;
float c;
int area;
float resultado;

printf("Este programa te calculara el area de un triangulo,cuadrado y rectangulo\n");

printf("Por favor seleccione de que figura quiere calcular el area\n");

printf("1 = Triangulo\n");
printf("2 = Cuadrado\n");
printf("3 = Rectangulo\n");
scanf(" %d", &area);


switch (area){

	case 1 :

	printf("Ingrese el valor de la base: ");
	scanf(" %f", &a);


	printf("Ingrese el valor de la altura: ");
	scanf(" %f", &c);

	resultado = (a * c)/2;
	printf("El area del triangulo es: %f\n", resultado);
	break; 

	case 2 :

	 printf("Ingrese el valor del lado: ");
        scanf(" %f", &b);


        resultado = (b * b);
        printf("El area del cuadrado  es: %f\n", resultado);
        break;


	case 3 :


	 printf("Ingrese el valor de la base: ");
        scanf(" %f", &a);


        printf("Ingrese el valor de la altura: ");
        scanf(" %f", &b);

        resultado = (a * b);
        printf("El area del rectangulo  es: %f\n", resultado);
        break;

default:

	printf("No existe esta opcion\n");

}


	
}

