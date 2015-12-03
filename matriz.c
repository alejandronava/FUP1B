#include<stdio.h>

int main(){
int matriz[4][4],f,c;
int C;

int N1;


printf("Ingrese los digitos para hacer la matriz\n\n");
   	
	for(f=0;f<4;f++) 
	{
		for(c=0;c<4;c++)
		{
          printf("Inserta un numero de la matriz:");
          scanf("%d",&matriz[f][c]);
        }
    }
   	
   	printf("\n\nTu matriz queda asi:\n\n");
   	for(f=0;f<4;f++)
   	{
   	    for(c=0;c<4;c++)
   	    {
   	     printf("%d ",matriz[f][c]);	
		}
		printf("\n");
	}
	
	
	printf("Inserta un numero por el cual multipicaras la matriz:\n");
	scanf("%d",&N1);
	printf("El resultado de la matriz multiplicada es:\n");
	   	for(f=0;f<4;f++)
   	{
   	    for(c=0;c<4;c++)
   	    {
   	     printf("%d ",matriz[f][c]*N1);	
		}
		printf("\n");
	}
}

