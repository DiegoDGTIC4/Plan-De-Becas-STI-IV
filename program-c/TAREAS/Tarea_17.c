#include<stdio.h>

int main()
{

float numero;

printf("Este programa te mostrara en que intervalo esta tu numero\n");

printf("Ingrese un numero: ");
scanf(" %f", &numero); 

if ( numero >100 || numero < 0 ){

	printf("Este numero esta fuera del intervalo\n");

}
else


if( numero <= 20 && numero >= 0 ){

	printf("Su numero esta dentro del intervalo [0,20]\n");
}

else

if ( numero <= 40 && numero >  20 ){

	printf("Su numero esta dentro del intervalo (20,40]\n");

}

else 

if ( numero <= 60 && numero > 40 ){

        printf("Su numero esta dentro del intervalo (40,60]\n");
}


else

if ( numero <= 80 && numero > 60 ){

        printf("Su numero esta dentro del intervalo (60,80]\n");
}

else


if ( numero <= 100 && numero > 80 ){

        printf("Su numero esta dentro del intervalo (80,100]\n");
}



}

