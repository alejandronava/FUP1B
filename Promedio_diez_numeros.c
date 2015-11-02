//PROGRAMA QUE CALCULE EL PROMEDIO DE DIEZ CANTIDADES
#include<stdio.h>
int N1;
int N2;
int N3;
int N4;
int N5;
int N6;
int N7;
int N8;
int N9;
int N10;
float suma;
float promedio;
char r;
int main()
{
	do
	{
		printf("Este es un programa que calcula el promedio de diez numeros \n");
		printf("Dame el primer numero \n",N1);
		scanf("%d",&N1);	
		printf("dame el segundo numero \n",N2);
		scanf("%d",&N2);
		printf("dame el tercer numero \n",N3);
		scanf("%d",&N3);
		printf("dame el cuarto numero \n",N4);
		scanf("%d",&N4);
		printf("dame el quinto numero \n",N5);
		scanf("%d",&N5);
		printf("dame el sexto numero \n",N6);
		scanf("%d",&N6);
		printf("dame el septimo numero \n",N7);
		scanf("%d",&N7);
		printf("dame el octavo numero \n",N8);
		scanf("%d",&N8);
		printf("dame el noveno numero \n",N9);
		scanf("%d",&N9);
		printf("dame el decimo numero \n",N10);
		scanf("%d",&N10);
		
		suma=N1+N2+N3+N4+N5+N6+N7+N8+N9+N10;
		promedio=suma/10;
		printf("el promedio es:%f.\n",promedio);
		printf("\n¿Quieres saber algun otro promedio?\n");
		printf("Inserte el numero de su respuesta\n 1-SI\n 2-NO\n");
	
		scanf("%d",&r);
	}
	while(r==1);

 }
 
