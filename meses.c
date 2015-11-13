#include<stdio.h>//Libreria de E/S

int mes;
int main()
	{
		printf("Programa que determine los meses\n");
		printf("DIME UN NUMERO DEL 1 AL 12 Y TE DIRE QUE MES ES:");
	scanf("%d",&mes);
	switch(mes)
	{
		
		case 1: {
			mes=31
			break;
		}
		case 2: {
			mes=29
			break;
		}
		case 3:{
			mes=31
			break;
		}
		case 4:{
			mes=30
			break;
		}
		case 5:{
			printf("mayo");
			break;
		}
		case 6:{
			printf("junio");
			break;
		}
		case 7:{
			printf("julio");
			break;
		}
		case 8:{
			printf("agosto");
			break;
		}
		case 9:{
			printf("septiembre");
			break;
		}
		case 10:{
			printf("octubre");
			break;
		}
		case 11:{
			printf("noviebre");
			break;
		}
		case 12:{
			printf("diciembre");
			break;
		}
		default: { printf("");
		        }break;
	}	
		
		
	}
