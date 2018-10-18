#include<stdio.h>

int main (){

float horas;
float segundos;
float numero2;
int conversor;
float resultado;
float minutos;
float dias;


printf("Este programa te hara conversiones de tipo Segundo-Minuto-Horas-Dias-Años\n");

printf("Por favor seleccione que tipo de conversion quiere realizar\n");

printf("1 = Segundo a Minuto\n");
printf("2 = Minuto a Hora\n");
printf("3 = Horas a Dias\n");
printf("4 = Dias a Años\n");
scanf(" %d", &conversor);


switch (conversor){

	case 1 : 
	printf("Ingrese un valor en segundos: ");
	scanf(" %f",&segundos);


	resultado = (segundos / 60);
	printf("La conversion en minutos es: %f\n",resultado);
	break;



	case 2 :
        printf("Ingrese un valor en minutos: ");
        scanf(" %f",&minutos);


        resultado = (minutos / 60);
        printf("La conversion en horas es: %f\n",resultado);
        break;

	

	case 3 :
        printf("Ingrese un valor en horas: ");
        scanf(" %f",&horas);


        resultado = (horas / 24);
        printf("La conversion en dias es: %f\n",resultado);
        break;


	

	 case 4 :
        printf("Ingrese un valor en dias: ");
        scanf(" %f",&dias);


        resultado = (dias / 365);
        printf("La conversion en años es: %f\n",resultado);
        break;

default:

	printf:("Esta conversion no se puede hacer\n");




}	
	
}


