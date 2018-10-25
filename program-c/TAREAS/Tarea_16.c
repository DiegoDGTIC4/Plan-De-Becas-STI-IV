#include<stdio.h>

int main()
{

int numero1;
int numero2;
int numero3;
int numero4;
int numero5;
int convertidor;
int choco;
int coca;
int huevo;
int leche;
int tacos;
float resultado;

printf("Que pedo banda bienvenidos a mi humilde tienda\n");
printf("****************************************************************************\n");
printf("Hagan el favor de poner la cantidad de producto que quieran comprar (Si no quieren cierto producto favor de ingresar el numero 0)\n");
printf("Posteriormente ingrese el numero del producto del cual quiera saber la cantidad que usted debe de pagar\n");
printf("Solo puede ingresar un numero a la vez\n");



printf("Cuantos  Chocotorros quiere: ");
scanf(" %d", &choco);

printf("Cuantas coquitas quiere: ");
scanf(" %d", &coca);


printf("Cuantos huevos quiere: ");
scanf(" %d", &huevo);


printf("Cuantas leches quiere: ");
scanf(" %d", &leche);

printf("Cuantos taquitos de canasta quiere joven: ");
scanf(" %d", &tacos);


printf("1 - Chocotorro\n");
printf("2 - Coca - Cola\n");
printf("3 - Huevo\n");
printf("4 - Leche\n");
printf("5 - Tacos de Canasta\n");
scanf(" %d", &convertidor);



switch(convertidor){


	case 1:
		resultado = (choco * 12.50);
		printf("Usted debe pagar por los chocotorros: %f pesos\n", resultado);
		break;

	 case 2:
                resultado = (coca * 15.50);
                printf("Usted debe pagar por las coquitas: %f pesos\n", resultado);
                break;

 

	 case 3:
                resultado = (huevo * 20);
                printf("Usted debe pagar por los huevos: %f pesos\n", resultado);
                break;

	  case 4:
                resultado = (leche * 23.75);
                printf("Usted debe pagar por los huevos: %f pesos\n", resultado);
                break;

	case 5:
                resultado = (tacos * 25);
                printf("Usted debe pagar por los taquitos: %f pesos\n", resultado);
                break;

default:

	printf("No manejamos este producto joven\n");



}

printf("Gracias por comprar en mi tienda banda see you tomorrow\n");



}
