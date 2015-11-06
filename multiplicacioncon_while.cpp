#include<stdio.h>// libreria de E/S
int main()
{


int i;
int suma;
int final;
int num1,num2;

printf("\nIngresa un numero\n" );
scanf("%d",&num1);
printf("\nIngresa un segundo numero\n" );
scanf("%d",&num2);
i=1;
suma=0;
while(i<=num2)
{
	suma=num1*num2;
     suma=suma+num1;
     i=i+1;
    
}
printf("%d",suma);
}






