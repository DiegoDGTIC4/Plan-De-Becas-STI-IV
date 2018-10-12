#include<stdio.h>

int main(){

int numero1;
int numero2;
float numero3;
float numero4;

printf("Ingrese el valor1:");
scanf("%d", &numero1);

printf("Ingrese el valor2:");
scanf("%d", &numero2);

printf("Ingrese el valor3:");
scanf("%f", &numero3);

printf("Ingrese el valor4:");
scanf("%f", &numero4);

if(numero1 >= numero2 && numero1 >= numero3 && numero1 >= numero4){
	printf("\n %d es el mayor.",numero1);
}
else

if(numero2 > numero3){
	printf("\n %d es el mayor.",numero2);
}
else

if(numero3 > numero4){
	 printf("\n %f es el mayor.",numero3);
}
else

	 printf("\n %f es el mayor.",numero4);


}

