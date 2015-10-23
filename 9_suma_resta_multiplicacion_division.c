//programa que sume,reste,multiplique y divida
#include<stdio.h>//libreria de E/S
int resultado;
int numero1;
int numero2;
int main()
{
	printf("dame un  numero");
	scanf("%d",&numero1);
	printf("dame un numero");
	scanf("%d",&numero2);
	resultado=numero1+numero2;
	printf("\nla suma es %d",resultado);
	resultado=numero1-numero2;
	printf("\nla resta es %d",resultado);
	resultado=numero1*numero2;
	printf("\nla multiplicacion es %d",resultado);
	resultado=numero1/numero2;
    printf("\nla division es %d",resultado);
}
