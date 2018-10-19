#include<stdio.h>

int main()
{


int signo;

printf("Bienvenido este programa te dira a que categoria pertenece tu signo zodiacal\n");

printf("Por favor seleccione su signo zodiacal\n");

printf("1 = Aries\n");
printf("2 = Tauro\n");
printf("3 = Geminis\n");
printf("4 = Cancer\n");
printf("5 = Leo\n");
printf("6 = Virgo\n");
printf("7 = Libra\n");
printf("8 = Escorpio\n");
printf("9 = Sagitario\n");
printf("10 = Capricornio\n");
printf("11 = Acuario\n");
printf("12 = Piscis\n");

scanf(" %d", &signo);


switch (signo){

	case 1:
                printf("Su categoria es fuego\n");
                break;

	case 2:
		printf("Su categoria es tierra\n");
		break;

	case 3:
                printf("Su categoria es aire\n");
                break;

case 4:
                printf("Su categoria es agua\n");
                break;

case 5:
                printf("Su categoria es fuego\n");
                break;

case 6:
                printf("Su categoria es tierra\n");
                break;

case 7:
                printf("Su categoria es aire\n");
                break;

case 8:
                printf("Su categoria es agua\n");
                break;

case 9:
                printf("Su categoria es fuego\n");
                break;

case 10:
                printf("Su categoria es tierra\n");
                break;

case 11:
                printf("Su categoria es aire\n");
                break;

case 12:
                printf("Su categoria es agua\n");
                break;

default:

	printf("No existe esta opcion\n");

}

}





