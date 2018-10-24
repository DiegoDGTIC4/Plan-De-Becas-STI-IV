#include<stdio.h>

int main(){

int jugador1;                      // variables
int jugador2;

printf("Este es el juego de piedra papel o tijera\n");
printf("Jugador 1 seleccione una de las siguientes opciones\n");

printf("1- Piedra\n");
printf("2- Papel\n");                                     // los prints
printf("3- Tijera\n");
scanf("%d", &jugador1);


printf("Este es el juego de piedra papel o tijera\n");
printf("Jugador 2 seleccione una de las siguientes opciones\n");

printf("1- Piedra\n");
printf("2- Papel\n");
printf("3- Tijera\n");
scanf("%d", &jugador2);

switch( jugador1){

						 // meter un switch 
		case 1:

		if ( jugador2 == 1){

		printf("Esto es un empate\n");
		}
	


		if ( jugador2 == 2){
		
		printf("El jugador2 ha ganado\n");	
		}

		 if ( jugador2 == 3){

                printf("El jugador1 ha ganado\n");
             	
		}

		break;




		case 2:

                if ( jugador2 == 1){

                printf("Gana el jugador1\n");

                }


                if ( jugador2 == 2){

                printf("Esto es un empate\n");
                }

                 if ( jugador2 == 3){

                printf("El jugador2 ha ganado\n");
                }

           
		break;


		case 3:

                if ( jugador2 == 1){

                printf("Gana el jugador2\n");

                }


                if ( jugador2 == 2){

                printf("Gana el jugador1\n");
                }

                 if ( jugador2 == 3){

                printf("Esto es un empate\n");
                }

              
		break;

default:

	printf("No se puede realizar nada con los valores que usted ingreso\n");
}
}
