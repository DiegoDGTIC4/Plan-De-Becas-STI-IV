#include<stdio.h>

int main(){


char letra;

printf("Ingresar una letra: ");
scanf(" %c",&letra);

	switch(letra){

	case 'a': 
	case 'A':
		printf("Su letra %c es una vocal\n, letra");
		break;

	case 'e':
	case 'E':
		printf("Su letra %c es una vocal\n, letra");
		break;

	 case 'i':
         case 'I':
		printf("Su letra %c es una vocal\n, letra");
		break;

	case 'o':
	case 'O':
		printf("Su letra %c es una vocal\n, letra");
		break;

	case 'u':
	case 'U':
		printf("Su letra %c es una vocal\n", letra);
		break;

	default	:
      		printf("Su letra %c es una consonante\n", letra);		

}

}	





