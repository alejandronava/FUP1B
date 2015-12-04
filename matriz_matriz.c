//PROGRAMA QUE MULTIPLICA DOS MATRICEZ
#include <stdio.h>

int f; 
int F; 
int c;
int Co;
int i;
int j;
int k;

int main()
{
	
	printf("Numero de filas de la primer matriz: ");
	scanf("%d",&f);
	printf("Numero de columnas: ");
	scanf("%d",&c);
	printf("Numero de filas de la segunda matriz: ");
	scanf("%d",&F);
	printf("Numero de columnas: ");
	scanf("%d",&Co);
	int a[f][c], b[f][Co],x[f][Co];
	{

		for(i=1;i<=f;i++)
		{
			for(j=1;j<=c;j++)
			{
				printf("Ingresa un valor a la matriz: ");
				scanf("%d",&a[i][j]);
			}
		}
	 printf("\n");
	    for(i=1;i<=F;i++)
	    {
		  for(j=1;j<=Co;j++)
		    {
			 printf("Ingresa un valor para la segunda matriz: ");
			 scanf("%d",&b[i][j]);
		    }
	    }
	
	    for(i=1;i<=f;i++)
	    {
		    for(j=1;j<=Co;j++)
		    {
			 x[i][j]=0;
			    for(k=1;k<=c;k++)
			    {
				 x[i][j]=(x[i][j]+(a[i][k]*b[k][j]));
			    }
		    }
	    }
	    
	 printf("\n\nLa primer matriz es esta:\n");
	    for(i=1;i<=f;i++)
		{
			for(j=1;j<=c;j++)
			{
			 printf("%d",a[i][j]);
			}
		 printf("\n");
		}
		
	 printf("\n\nLa segunda matriz es esta:\n");
	    for(i=1;i<=F;i++)
	    {
		  for(j=1;j<=Co;j++)
		    {
			 printf("%d",b[i][j]);
		    }
		 printf("\n");
	    }

	 printf("\n\nAl multiplicar ambas matricez el resultado es este:\n");
        for(i=1;i<=f;i++)
        {
    	 printf("\n");
    	    for(j=1;j<=Co;j++)
    	    {
    		 printf("%d",x[i][j]);
		    }
	    }
	 printf("\n");
}
}

