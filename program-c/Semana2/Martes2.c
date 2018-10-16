#include<stdio.h> 

int main()
{

int numero;
int contador = 1;


printf("Ingrese el valor: ");
scanf(" %d", &numero);

for  (contador; contador <= numero; contador = contador + 1){

	printf(" %d\n", contador);
}

}
