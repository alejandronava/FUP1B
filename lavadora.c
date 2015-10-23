#include <stdio.h> //Libreria E/S

int kilogramos;
int ciclo;

int main()
{
	printf("Programa que dice el nivel de agua y el tiempo que tardara dependiendo el tipo\n");
	printf("Introduce los kilos de ropa\n");
	scanf("%d", &kilogramos);
	
		if(kilogramos>21)
	{
		printf("no se puede lavar");
		return 0;
		}
		else if (kilogramos<=10)
 		printf("el nivel de agua es minimo");

			
		else if (kilogramos<=15)
		{
 		printf("el nivel de agua es medio");
		
		}	
			
		else if (kilogramos<=20)
		{
 		printf("El nivel de agua es maximo");
		
		}
		
	
	printf("\nDime el numero de cilo de lavado que desea,depende del tipo de ropa\nCiclo 1 delicado\nCiclo 2 normal\nCiclo 3 sucia\n");
	scanf("%d", &ciclo);
	switch (ciclo){
		case 1:
			printf("Tardara 5 minutos");
		break;
		case 2:
			printf("Tardara 10 minutos");
		break;
		case 3:
			printf("Tardara 20 minutos");
		break;
		
		default:printf("No existe opción");
	}
			
}
					

				
		
		
	


		
	
	  
	
	
	

