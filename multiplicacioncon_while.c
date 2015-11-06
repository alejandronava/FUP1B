
#include<stdio.h>// libreria de E/S
int main()
{




int a;
int i;
int final;
int num1,num2;
i=1;
a=0;
printf("\nIngresa un numero\n" );
scanf("%d",&num1);
printf("\nIngresa un segundo numero\n" );
scanf("%d",&num2);

while(i<=num1)
{
      a=num1*num2;
      printf("\nEl resultado es: %d",a);
      i=num1+num1;
	  printf("\nla suma es: %d",i);
	return 0;
}



}
