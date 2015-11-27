//PROGRAMA QUE ENCUENTRA SUBCADENAS DENTRO DE UNA CADENA
#include<stdio.h>
char cadena[50];
char subcadena[50];
int j=0;
int i=0;
int main()
{	printf("PROGRAMA QUE BUSCA UNA SUBCADENA DE PALABRAS DENTRO DE UNA CADENA DE PALABRA:\n");
	printf("\nInserta la palabra:\n");
	scanf("%s",cadena);
	printf("Inserta la subcadena que deseas buscar:\n");
	scanf("%s",subcadena);

		while(cadena[i]!='\0'){
		while(cadena[i]==subcadena[j]){
			
			i++;
			j++;
			if(subcadena[j]=='\0'){
			
			printf("\nESTA CADENA SI EXISTE");
			return 0;
			}
		}
		
		i++;
		j=0;
		if('\0'==cadena[i]){
		printf("\nESTA CADENA NO EXISTE");
		break;
		}
	

}

}

