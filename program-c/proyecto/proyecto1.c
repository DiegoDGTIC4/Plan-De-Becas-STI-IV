
/* Proyecto final : SOPA DE LETRAS

Plan de Becas. Servicios de TI Promoción IV

Curso: Introducción a la programación en c

Integrantes:

Diego Mora Monroy

Cesar Alexis Velazquez Marin

Instructores:

Francisco Martinez Garrido
Cesar Gustavo Sanchez de la Rosa

*/




#include<stdio.h>


int main()
{

char ma[4][13]={{'q','w','e','r','t','y','u','i','o','p','a','s','d'},{'f','g','h','j','k','l','z','x','c','v','b','n','m'},{'n','m','b','v','c','x','z','l','k','j','h','g','f'},{'d','s','a','p','o','i','u','y','t','r','e','w','q'}};
	int mi[4]={1,2,3,4};
	printf("**********************************************\n");
	printf("*Bienvenido a esta maravillosa sopa de letras*\n");
	printf("**********************************************\n");
	int j,i,k,m=1,a,b,c,d,intentos=1;
	printf("1  2  3  4  5  6  7  8  9 10 11 12 13\n"); 
	for(i=0;i<4;i++){

	for(j=0;j<13;j++){
			
			printf("%c  ",ma[i][j]);
			
		}
		printf(" %d",m++);
		printf("\n");
	}
	printf("Instruciones:Encuentra todos los pares de las letras presentadas en esta sopa\nEjemplo:\na=3,4 11,1\n");
	printf("Solo tienes un intento para completar exitosamente esta sopa, por lo que debes de elegir sabiamente\n");
	printf("******Suerte*******\n");




	while(intentos<=26){
			intentos ++;
			printf("\nDigite la cordenada de la primera letra: ");
			scanf("%i,%i",&a,&b); 
			printf("\nDigite la cordenada de la segunda letra: ");
			scanf("%i,%i",&c,&d);

			if(a==3 && b==4 && c==11 && d==1 || a==11 && b==1 && c==3 && d==4 ){
				printf("Acertaste la cordenada de la letra a\n");	
			}
			else if(a==3 && b==3 && c==11 && d==2 || a==11 && b==2 && c==3 && d==3){
				printf("Acertaste la cordenada de la letra b\n");
			}
			else if(a==5 && b==3 && c==9 && d==2 || a==9 && b==2 && c==5 && d==3){
				printf("Acertaste la cordenada de la letra c\n");
			}
			else if(a==1 && b==4 && c==13 && d==1 || a==13 && b==1 && c==1 && d==4){
                                printf("Acertaste la cordenada de la letra d\n");
                        }
			else if(a==3 && b==1 && c==11 && d==4 || a==11 && b==4 && c==3 && d==1){
                                printf("Acertaste la cordenada de la letra e\n");
                        }
                        else if(a==1 && b==2 && c==13 && d==3 || a==13 && b==3 && c==1 && d==2){                  
                                printf("Acertaste la cordenada de la letra f\n");
                        }
                        else if(a==12 && b==3 && c==2 && d==2 || a==2 && b==2 && c==13 && d==3){
                                printf("Acertaste la cordenada de la letra g\n");
                        }
			else if(a==3 && b==2 && c==11 && d==3 || a==11 && b==3 && c==3 && d==2){
                                printf("Acertaste la cordenada de la letra h\n");
                        }
                        else if(a==8 && b==1 && c==6 && d==4 || a==6 && b==4 && c==8 && d==1){                  
                                printf("Acertaste la cordenada de la letra i\n");
                        }
			else if(a==4 && b==2 && c==10 && d==3 || a==10 && b==3 && c==4 && d==2){
                                printf("Acertaste la cordenada de la letra j\n");
                        }
                        else if(a==9 && b==3 && c==5 && d==2 || a==5 && b==2 && c==9 && d==3){                  
                                printf("Acertaste la cordenada de la letra k\n");
                        }
                        else if(a==8 && b==3 && c==6 && d==2 || a==6 && b==2 && c==8 && d==3){
                                printf("Acertaste la cordenada de la letra l\n");
                        }
			else if(a==2 && b==3 && c==13 && d==2 || a==13 && b==2 && d==2 && d==3){
				printf("Acertaste la cordenada de la letra m\n");
			}
			else if(a==1 && b==3 && c==12 && d==2 || a==12 && b==2 && c==1 && d==3){
                                printf("Acertaste la cordenada de la letra n\n");
			}
			else if(a==5 && b==4 && c==9 && d==1 || a==9 && b==1 && c==5 && d==4){
                                printf("Acertaste la cordenada de la letra o\n");
                        }
                        else if(a==4 && b==4 && c==10 && d==1 || a==10 && b==1 && c==4 && d==4){
                                printf("Acertaste la cordenada de la letra p\n");
                        }
                        else if(a==1 && b==1 && c==13 && d==4 || a==13 && b==4 && c==1 && d==1){
                                printf("Acertaste la cordenada de la letra q\n");
                        }
                        else if(a==4 && b==1 && c==10 && d==4 || a==10 && b==4 && c==4 && d==1){
                                printf("Acertaste la cordenada de la letra r\n");
                        }
			else if(a==2 && b==4 && c==12 && d==1 || a==12 && b==1 && c==2 && d==4){
                                printf("Acertaste la cordenada de la letra s\n");
                        }
                        else if(a==5 && b==1 && c==9 && d==4 || a==9 && b==4 && c==5 && d==1){
                                printf("Acertaste la cordenada de la letra t\n");
                        }
                        else if(a==7 && b==1 && c==7 && d==4 || a==7 && b==4 && c==7 && d==1){
                                printf("Acertaste la cordenada de la letra u\n");
                        }
                        else if(a==4 && b==3 && c==10 && d==2 || a==10 && b==2 && c==4 && d==3){
                                printf("Acertaste la cordenada de la letra v\n");
                        }
                        else if(a==2 && b==1 && c==12 && d==4 || a==12 && b==4 && c==2 && d==1){
                                printf("Acertaste la cordenada de la letra w\n");
                        }
                        else if(a==6 && b==3 && c==8 && d==2 || a==8 && b==2 && c==6 && d==3){
                                printf("Acertaste la cordenada de la letra x\n");
                        }
                        else if(a==6 && b==1 && c==8 && d==4 || a==8 && b==4 && c==6 && d==1){
                                printf("Acertaste la cordenada de la letra y\n");
                        }
                        else if(a==7 && b==2 && c==7 && d==3 || a==7 && b==3 && c==7 && d==2){
                                printf("Acertaste la cordenada de la letra z\n");

			}

			
			else{
				 printf("Error las cordenadas digitadas no corresponden a ningun par de letras\n");
				printf("Intente de nuevo :)\n");
			}


}
			printf("Has completado la sopa con éxito. Felicidades\n\n");

}
