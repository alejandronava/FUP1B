#include<stdio.h>

int main(){
int r,a,b,resultado,resultado2,resultado3,resultado4,resultado5;
b=10;
printf("PROGRAMA QUE DETERMINA CUANTAS UNIDADES,DECENAS,CENTENAS Y MILLARES HAY EN EL NUMERO A DIVIDIR\n");
printf("\nDame una cantidad de 4 cifras\n");
scanf("%d",&a);

resultado=a/10;

printf("\nEste es el resultado de cuantas unidades,decenas,centenas y millares hay en el numero a dividir\n");
r=a%b;
printf("\nLas unidades son: %d\n",r);

resultado2=resultado/10;

r=resultado%10;
printf("\nLas decenas son: %d\n",r);
resultado3=resultado2/10;
    
r=resultado2%10;
printf("\nLas centenas son: %d\n",r);
resultado4=resultado3/10;

r=resultado3%10;
printf("\nLos millares son: %d\n",r);
return 0;
resultado5=resultado4/10;
	printf("\nLa division es: %d\n",resultado5);
r=resultado4%10;
printf("\nLos millares son: %d\n",r);

}
