#include<stdio.h>

int N1;
int popo;
int i;

int main()
{

	printf("\nprograma que duplica el numero del mismo\n");
	printf("\nDame un numero \n");
	scanf("%d", &N1);
	popo=1;
	while(popo<=N1)
{
	i=1;
	while(i<=popo)

	{
		printf("%d",popo);
		i++;
	}
	printf("\n");
	popo++;
	}
	system("pause");	
}
