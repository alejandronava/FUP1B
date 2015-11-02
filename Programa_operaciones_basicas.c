//PROGRAMA QUE SUME,RESTE,MULTIPLIQUE Y DIVIDE DOS NUMEROS
#include<stdio.h>
int resultado;
int numero1;
int numero2;
char r;
int main()

{
do
{
	
	printf("Inserta un  numero\n");
	scanf("%d",&numero1);
	printf("Inserta el segundo numero\n");
	scanf("%d",&numero2);
	printf("El resultado de las operaciones son los siguientes:\n");
	resultado=numero1+numero2;
	printf("\nLa suma es %d",resultado);
	resultado=numero1-numero2;
	printf("\nLa resta es %d",resultado);
	resultado=numero1*numero2;
	printf("\nLa multiplicacion es %d",resultado);
	resultado=numero1/numero2;
    printf("\nLa division es %d\n",resultado);
    printf("\n¿Quieres seguir haciendo operaciones?\n");
	printf("Inserte el numero de su respuesta\n 1-SI\n 2-NO\n");
	scanf("%d",&r);
}

    while(r==1);
}
 



