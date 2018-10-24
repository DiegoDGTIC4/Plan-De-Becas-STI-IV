#include<stdio.h>
#include<string.h>

int main(){

char cadena1 [5]="HOLA";

char cadena2 [5]="ADIOS";

char cadena3 []="ESTA ES UNA CADENA";

char cadena4 [40];

printf("Cadena 4 contiene %s\n", cadena4);
strcpy(cadena4,cadena1);

printf("Cadena 4 contiene %s\n", cadena4);

strncpy(cadena4,cadena2,3);


printf("Cadena 4 contiene %s\n", cadena4);



printf("Cadena concatenada %s\n", strcat(cadena1,cadena2);
printf("Cadena 1 %s\n",cadena1);
printf("Cadena 2 %s\n",cadena2);



}



