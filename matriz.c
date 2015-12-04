#include<stdio.h>

int main(){
int matriz[3][3],f,c;
int matriz2[3][3],F,Co;
int k;

int N1;


printf("Ingrese los digitos para hacer la matriz\n\n");
   	
	for(f=0;f<3;f++) 
	{
		for(c=0;c<3;c++)
		{
          printf("Inserta un numero de la matriz:");
          scanf("%d",&matriz[f][c]);
        }
    }
   	
   	printf("\n\nTu primer matriz queda asi:\n\n");
   	for(f=0;f<3;f++)
   	{
   	    for(c=0;c<3;c++)
   	    {
   	     printf("%d ",matriz[f][c]);	
		}
		printf("\n");
	}
	printf("Ingrese los digitos para hacer la matriz\n\n");
   	
	for(F=0;F<3;F++) 
	{
		for(Co=0;Co<3;Co++)
		{
          printf("Inserta un numero de la matriz:");
          scanf("%d",&matriz2[F][Co]);
        }
    }
   	
   	printf("\n\nTu segund matriz queda asi:\n\n");
   	for(F=0;F<3;F++)
   	{
   	    for(Co=0;Co<3;Co++)
   	    {
   	     printf("%d ",matriz2[F][Co]);	
		}
		printf("\n");
	}
	
	
	printf("Inserta un numero por el cual multipicaras la matriz:\n");
	scanf("%d",&N1);
	printf("El resultado de la matriz multiplicada es:\n");
	   	for(f=0;f<3;f++)
   	{
   	    for(c=0;c<3;c++)
   	    {
   	     printf("%d ",matriz[f][c]*N1);	
		}
		printf("\n");
	}
printf("\n\nEl producto es:\n");
int a[f][c], b[f][Co],x[f][Co];

 x[f][F]=0;
			    for(k=1;k<=c;k++)
			    {
				 x[f][F]=(x[f][F]+(a[c][k]*b[k][F]));
        for(f=1;f<=c;f++)
        {
    	 printf("\n");
    	    for(F=1;F<=Co;F++)
    	    {
    		 printf("%d",x[f][F]);
		    }
		    printf("\n");
	    }
	 
}
}

