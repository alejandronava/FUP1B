#include<stdio.h>//Libreria de E/S

int N1;
int main()
{//Inicio
	printf("Programa que calcular edades");
	scanf("%d",&N1);
	if(N1>=0 && N1<=12)
	{
			printf("Eres un niño");		
	}
	else
	{
		if(N1>=13 && N1<=18)
		printf("Eres un adolescente");
	}
	{
		if(N1>=19 && N1<=29)
		printf("Eres un joven");
		{
		if(N1>=30 && N1<=59)
		printf("Eres un adulto");	
		}
		{
		if(N1>60)
		printf("Eres un adulto mayor");	
		}
	
	}
	}//Fin

