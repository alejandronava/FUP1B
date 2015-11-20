//PROGRAMA QUE IMPRIME DIEZ NUMEROS INGRESADOS DE MANERA INVERSA
#include <stdio.h> 

int main() { 
int numeros[9]; 
int i;

printf("PROGRAMA QUE IMPRIME DIEZ NUMEROS INGRESADOS DE MANERA INVERSA:\n"); 
printf("\nIntroduce los 10 numeros:\n"); 
for(i=0; i<10; i++) { 
printf("%d: ", i+1); 
scanf("%d", &numeros[i]);  
} 
printf("Los numeros que ingresaste son:\n"); 
for(i=0; i<10 ; i++) { 
printf("%d ", numeros[i]); 
} 
printf("\n"); 

printf("LOS NUMEROS IMPRESOS AL REVEZ SON:\n"); 
for(i=9;i>=0;i--) { 
printf("%d ", numeros[i]); 
} 
printf("\n"); 
} 

