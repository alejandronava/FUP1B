#include <stdio.h>

int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;


int main()
{
	printf("A continuacion insertaras 10 numeros el programa te dira cual es el numero menor y cual el menor\n");
	
	
	printf("Inserta el primer numero\n");
	scanf("%d", &n1);
	printf("Inserta el segundo número\n");
	scanf("%d", &n2);
	printf("Inserta el tercer numero\n");
	scanf("%d", &n3);
	printf("Inserta el cuarto numero\n");
	scanf("%d", &n4);
	printf("Inserta el quinto numero\n");
	scanf("%d", &n5);
	printf("Inserta el sexto numero\n");
	scanf("%d", &n6);
	printf("Inserta el septimo numero\n");
	scanf("%d", &n7);
	printf("Inserta el octavo numero\n");
	scanf("%d", &n8);
	printf("Inserta el noveno numero\n");
	scanf("%d", &n9);
	printf("Inserta el decimo numero\n");
	scanf("%d", &n10);
	
	printf("Los siguientes numeros son el numero mayor y el numero menor:\n");
	
	
	if(n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5 && n1>=n6 && n1>=n7 && n1>=n8 && n1>=n9 && n1>=n10)
	
	{
	
		printf("El mayor es: %d\n",n1);	
		
 	}
 	else
 	{
		
		if (n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5 && n2>=n6 && n2>=n7 && n2>=n8 && n2>=n9 && n2>=n10)
		{
			printf("El mayor es: %d\n",n2);
		
			}
		if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n3>n6 && n3>n7 && n3>n8 && n3>n9 && n3>n10)
		 {
			printf("El mayor es: %d\n", n3);	
			}		
		if (n4>=n1 && n4>=n2 && n4>=n3 && n4>=n5 && n4>=n6 && n4>=n7 && n4>=n8 && n4>=n9 && n4>=n10)
		{
			printf("El mayor es: %d\n", n4);
			}	
		if (n5>=n1 && n5>=n2 && n5>=n3 && n5>=n4 && n5>=n6 && n5>=n7 && n5>=n8 && n5>=n9 && n5>=n10)
		{
		    printf("El mayor es: %d\n", n5);
			}	
		if (n6>=n1 && n6>=n2 && n6>=n3 && n6>=n4 && n6>=n5 && n6>=n7 && n6>=n8 && n6>=n9 && n6>=n10)
		{
			printf("El mayor es: %d\n", n6);
			}	
		if (n7>=n1 && n7>=n2 && n7>=n3 && n7>=n4 && n7>=n5 && n7>=n6 && n7>=n8 && n7>=n9 && n7>=n10)
		{
			printf("El mayor es: %d\n", n7);
			}	
		if (n8>=n1 && n8>=n2 && n8>=n3 && n8>=n4 && n8>=n5 && n8>=n6 && n8>=n7 && n8>=n9 && n8>=n10)
		{
			printf("El mayor es: %d\n", n8);
			
			}
		if (n9>=n1 && n9>=n2 && n9>=n3 && n9>=n4 && n9>=n5 && n9>=n6 && n9>=n7 && n9>=n8 && n9>=n10)
		{
			printf("El mayor es: %d\n", n9);
			}	
		if (n10>=n1 && n10>=n2 && n10>=n3 && n10>=n4 && n10>=n5 && n10>=n6 && n10>=n7 && n10>=n8 && n10>=n9)
		{
			printf("El mayor es: %d\n", n10);
			}					
			
		}	
			
		if(n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5 && n1<=n6 && n1<=n7 && n1<=n8 && n1<=n9 && n1<=n10)
		{
		printf("El menor es: %d\n",n1);	
		return 0;
		}
 	    else
{
		
		if (n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5 && n2<=n6 && n2<=n7 && n2<=n8 && n2<=n9 && n2<=n10  )
		{
			printf("El menor es: %d\n",n2);
			return 0;
		}
		if (n3<=n1 && n3<=n2 && n3<=n4 && n3<=n5 && n2<=n6 && n2<=n7 && n2<=n8 && n2<=n9 && n2<=n10 )
		 {
			printf("El menor es: %d\n", n3);	
			return 0;
		}		
		if (n4<=n1 && n4<=n2 && n4<=n3 && n4<=n5 && n4<=n6 && n4<=n7 && n4<=n8 && n4<=n9 && n4<=n10 )
		{
			printf("El menor es: %d\n", n4);
			return 0;
		}	
		if (n5<=n1 && n5<=n2 && n5<=n3 && n5<=n4 && n5<=n6 && n5<=n7 && n5<=n8 && n5<=n9 && n5<=n10)
		{
			printf("El menor es: %d\n", n5);
			return 0;
		}
		if (n6<=n1 && n6<=n2 && n6<=n3 && n6<=n4 && n6<=n5 && n6<=n7 && n6<=n8 && n6<=n9 && n6<=n10 )
		{
			printf("El menor es: %d\n", n6);
			return 0;	
		}
		if (n7<=n1 && n7<=n2 && n7<=n3 && n7<=n4 && n7<=n5 && n7<=n6 && n7<=n8 && n7<=n9 && n7<=n10 )
		{
			printf("El menor es: %d\n", n7);
			return 0;	
		}
		if (n8<=n1 && n8<=n2 && n8<=n3 && n8<=n4 && n8<=n5 && n8<=n6 && n8<=n7 && n8<=n9 && n8<=n10 )
		{
			printf("El menor es: %d\n", n8);
			return 0;	
		}
		if (n9<=n1 && n9<=n2 && n9<=n3 && n9<=n4 && n9<=n5 && n9<=n6 && n9<=n7 && n9<=n8 && n9<=n10 )
		{
			printf("El menor es: %d\n", n9);
			return 0;	
		}
		if (n10<=n1 && n10<=n2 && n10<=n3 && n10<=n4 && n10<=n5 && n10<=n6 && n10<=n7 && n10<=n8 && n10<=n9 )
		{
			printf("El menor es: %d\n", n4);
			return 0;	
		}
}	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
