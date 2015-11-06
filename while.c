#include<stdio.h>//Libreria de E/S
int i;
int N1=1;
int N2=0;
int main()
{//Inicio
	printf("Dame cualquier numero:\n");
	scanf("%d",&i);
	while(N1<=i)
	{
		N2=N1 + N2;
		N1=N1+1;
	}
	printf("%d",N2);
}//Fin

