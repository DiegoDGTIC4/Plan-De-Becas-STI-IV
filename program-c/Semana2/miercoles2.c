#include<stdio.h>

int main(){


char Palabra[15];
int i;                                 // i = contador




printf("Ingresa una palabra de maximo de 15 letras: ");


for(i = 0; i < 15; i++)

{


scanf("%c", &Palabra[i]);
if(Palabra[i] == '\n'){

	break;

}


}


printf("\nSu palabra fue: ");

for(i = 0; i < 15; i++);
{


printf("%c", Palabra[i]);


}



}
