#include<stdio.h>//libreria de E/S
/*programa que haga las operaciones
*/
int resultado1;
int resultado2;
int resultado3;
int main()
{//inicio
float N1,resultado1,resultado2;
int resultado3;
   printf("dame la cantidad total:");
   scanf("%f", &N1);
   resultado1=N1*10/100;
   resultado2=N1+150;
   resultado3=resultado2/15;
   printf("\nLa propina es de: %f",resultado1);
   printf("\nLa cantidad total es de: %f", resultado2);
   printf("\nLa cantidad a pagar por persona es de: %d",resultado3);
}//fin
