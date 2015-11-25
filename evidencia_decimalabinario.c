//PROGRAMA QUE TRANSFORMA UNA CANTIDAD DE DECIMAL A BINARIO
#include<stdio.h>

int main(){
int N4[10];
int N1;
int N2;
int N3=0;
int i;

	printf("DECIMALES A BINARIOS\n");
	printf("Dame la cantidad que deseas transformar a binario:\n");
	scanf("%d",&N1);
	while(N1>0)
	{
		N2=N1%2;
		N4[N3]=N2;
		N1=N1/2;
		N3++;
	}
		printf("LA CANTIDAD DE DECIMAL A BINARIO ES:\n");
	i=N3;
	while(i>0)
	{
		i--;
	
		printf("%d",N4[i]);
	}
}
