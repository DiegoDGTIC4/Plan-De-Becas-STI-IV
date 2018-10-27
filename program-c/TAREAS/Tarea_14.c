#include<stdio.h>
#include<math.h>



int main ()

{

int rem;
int i = 0;
int numero = 0;
int n;
int convertidor;
int binario;
int octal;
int hexadecimal;

printf("Este programa te calcula de entero a binario, octal y hexadecimal\n");

printf("Seleccione que convertidor quiere usar\n");

printf("1 - Decimal a Binario\n");
printf("2 - Decimal a Octal\n");
printf("3 - Decimal a Hexadecimal\n");
scanf(" %d", &convertidor);



switch(convertidor){


	case 1:

	 printf("Ingrese un numero porfavor: ");
        scanf(" %d", &binario);

	while ( binario > 0 )

{

	rem = binario%2;
	numero = numero + rem * pow(10,i);
	i++;
	binario = binario / 2;

}

	printf("Su numero binario es %d\n", numero);
	break;


	case 2 :

	 printf("Ingrese un numero porfavor: ");
        scanf(" %d", &octal);

	printf("Su numero en Octal es: %o\n", octal);
	break;


	case 3 :

         printf("Ingrese un numero porfavor: ");
        scanf(" %d", &hexadecimal);

        printf("Su numero en Hexadecimal es: %x\n", hexadecimal);
        break;

default:

printf("Este programa no realiza lo que usted quiere\n");

}

}
