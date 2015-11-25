//PROGRAMA QUE REMPLAZA LA LETRA QUE DESEAS POR OTRA QUE INGRESES
#include<stdio.h>

int main(){
char cadena[10];
char B;
char C;
int i;
	
	printf("ESTE ES UN PROGRAMA QUE REMPLAZA LA LETRA QUE DESEAS POR OTRA\n\n");
	printf("Inserta una palabra:\n");
	scanf("%s",cadena);
	printf("Inserta la letra que deseas buscar y remplazar:\n");
	scanf("%s",&B);
	printf("Inserta la letra que deseas insertar en lugar de la otra:\n");
	scanf("%s",&C);
	for(i=0;cadena[i]!=' ';i++)
	{
		if(cadena[i]==B)
		{
			cadena[i]=C;
		}
	}
	printf("La palabra con las letras sustituidas es esta:\n");
	printf("%s",cadena);
}
