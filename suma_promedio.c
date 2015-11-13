#include<stdio.h>
int main(){

	int i,P;
	int CF[10];
	int S= 0;

printf("PROGRAMA QUE CALCULA EL PROMEDIO Y LA SUMA DE DIEZ CALIFICACIONES\n");
printf("Despues de insertar una calificacion da un enter para insertar la siguiente\n");
printf("Inserta las 10 calificaciones\n");
    
	for (i=0;i<10;i++)
    {
    scanf("%d",&CF[i]);
    S+=CF[i];
    }
    printf("\nSUMA DE TUS CALIFICACIONES:\n%d",S);
    P=S/10;
    printf("\nPROMEDIO:\n%d",P);
    
}
