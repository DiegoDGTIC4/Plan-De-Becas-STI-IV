#include<stdio.h>

int main(){

char letra;
char a,e,i,o,u;

printf("Ingrese una letra: ");
scanf("%c", &letra);

if(letra == 'a' || letra == 'A'){
	printf("Su letra es: %c y es vocal\n", letra);
	}

else

if(letra == 'e' || letra == 'E'){
        printf("Su letra es: %c y es vocal\n", letra);
	}

else

if(letra == 'i' || letra == 'I'){
        printf("Su letra es: %c y es vocal\n", letra);
        }

else

if(letra == 'o' || letra == 'O'){
        printf("Su letra es: %c y es vocal\n", letra);
        }

else

if(letra == 'u' || letra == 'U'){
        printf("Su letra es: %c y es vocal\n", letra);
        }

else printf("Su letra es: %c y es consonante\n", letra);

}




