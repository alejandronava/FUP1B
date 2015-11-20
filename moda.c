#include <stdio.h>


int main()
{
    
    int numeros[10];
    int i=0;
    int auxiliar[10];
    int posicion;
    int numero;
    int contador2;
    int mayor;
    int posicionmayor;
    int suma;
    int promedio;
    
   

	 
	 	
    printf("Inserta tu calificacion:\n");
        scanf(" %d",&numeros[i]); 
   {
   
   if(numeros[i]>10)
  	{
   
   printf("No es una calificacion");
   return 0;
	}
	
   else 
	{
	     for(i=0;i<9;i++){
		 
   	printf("Inserta tu calificacion:\n");
        scanf(" %d",&numeros[i]);
        
      }
 
{

    for(i=0;i<10;i++) {
        auxiliar[i]=0;
    
    }
    
    for(i=0;i<10;i++) {
        numero = numeros[i];
        posicion = i;
        for(contador2=i;contador2<10;contador2++) {
            if(numeros[contador2]==numero) auxiliar[posicion]++;
        }
    }
    
    mayor=auxiliar[0];
    posicionmayor = 0;
    for(i=0;i<10;i++) {
        if(auxiliar[i]>mayor) {
            posicionmayor=i;
            mayor=auxiliar[i];
        }
    }
   
    printf("\nLA MODA ES: %d",numeros[posicionmayor]);
    suma+=numeros[i];
	
}
}
}
}

