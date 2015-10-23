#include<stdio.h>//libreria de E/S
/*Programa que dice el precio de algun producto y te dice cuanto tienes que pagar por varios
*/
int N1;
int total;
int main()
{// inicio
printf("\nTienda");
printf("\n 1 LECHE 13.5$\n 2 PALETAS 2$\n 3 CHICLES 1$\n 4 COCA-COLA 8$\n 5 PAN BIMBO 24$\n 6 GARRAFON 10$\n 7 TANG 5$\n 8 REFRESCOS DE 600ML 9$\n 9 YOGURT 6.5$\n 10 RAIDOLITOS 4$\n");
printf("Observe el numero del producto e ingreselo\n");
scanf("%d",&N1);

switch (N1)
{

	case 1:{
		printf("¿Cuantas leches quieres?\n");
		scanf("%d",&N1);
		total=N1*13.5;
		printf("total:%d",total);
		break;
	}
		
	case 2:{
		printf("¿Cuantas paletas quieres?\n");
		scanf("%d",&N1);
		total=N1*2;
		printf("total:%d",total);
		break;
	}
	case 3:{
		printf ("¿Cuantos chicles quieres?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf ("total:%d",total);
		break;
	}
	case 4:{
		printf ("¿Cuantas cocas quieres?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 5:{
		printf("¿Cuantos pan bimbos quiere?\n");
		scanf("%d",&N1);
		total=N1*24;
		printf ("total:%d",total);
		break;
	}
	case 6:{
		printf("Cuantos garrafones quiere\n");
		scanf("%d",&N1);
		total=N1*10;
		printf("total:%d",total);
		break;
	}
	case 7:{
		printf("¿Cuantos tangs desea?\n");
		scanf("%d",&N1);
		total=N1*5;
		printf("total:%d",total);
		break;
	}
	case 8:{
		printf("¿Cuantos refrescos desea?\n");
		scanf("%d",&N1);
		total=N1*9;
		printf("total:%d",total);
		break;
	}
	case 9:{
		printf("¿Cuantos yogurts desea?\n");
		scanf("%d",&N1);
		total=N1*6.5;
		printf("total:%d",total);
		break;
	}
	case 10:{
		printf("¿Cuantos raidolitos desea?\n");
		scanf("%d",&N1);
		total=N1*4;
		printf("total:%d",total);
		break;
	}
	default:{
	printf("no hay");
		break;	
}
}
}//fin

