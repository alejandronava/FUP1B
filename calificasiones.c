#include<stdio.h>//libreria de E/S
/* programa que detrmine la suma de varios productos
*/
int operacion;
int cambio;
int N1;
int N2;
int N3;
int N4;
int N5;
int N6;
int main()
{// inicio
printf("Dame el numero de chocolates que comprara:");
scanf("%d",&N1);
printf("Dame el numero de chetos que comprara:");
scanf("%d",&N2);
printf("Dame el numero de chicles que comprara:");
scanf("%d",&N3);
printf("Dame el numero de gelatinas que comprara:");
scanf("%d",&N4);
printf("Dame el numero de maruchan:");
scanf("%d",&N5);
operacion=N1*3+N2*6+N3*1+N4*5+N5*7;
printf("\nEl resultado es:\n%d",operacion);
printf("\nInserte el total de dinero que va dar:");
scanf("%d",&N6);
cambio=N6-operacion;
printf("\nEl cambio es:%d",cambio);
}// fin








