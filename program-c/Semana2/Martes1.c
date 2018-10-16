#include<stdio.h>

int main ()
{

int numero;
int contador = 1;

printf("Por favor ingrese un valor: ");
scanf(" %d",&numero);


do
{ 


printf(" %d\n", contador);
        contador = contador + 1;

}
 while (contador <= numero);



}

