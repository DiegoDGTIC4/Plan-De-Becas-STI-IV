#include<stdio.h>


int main()
{

char ma[4][13]={{'q','w','e','r','t','y','u','i','o','p','a','s','d'},{'f','g','h','j','k','l','z','x','c','v','b','n','m'},{'n','m','b','v','c','x','z','l','k','j','h','g','f'},{'d','s','a','p','o','i','u','y','t','r','e','w','q'}};
	int mi[4]={1,2,3,4};
	printf("**********************************************\n");
	printf("*Bienvenido a esta maravillosa sopa de letras*\n");
	printf("**********************************************\n");
	int j,i,k,m=1;
	printf("1  2  3  4  5  6  7  8  9 10 11 12 13\n"); 
	for(i=0;i<4;i++){

	for(j=0;j<13;j++){
			
			printf("%c  ",ma[i][j]);
			
		}
		printf(" %d",m++);
		printf("\n");
	}
	printf("Instruciones:Encuentra todos los pares de las letras presentadas en sopa\nEjemplo:\na=3,4 11,1\n");






}
