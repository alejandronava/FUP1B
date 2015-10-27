#include <stdio.h>//Libreria de E/S

int main() 
{ 
    int N1, N2, N3; 
     
    {  
     
    printf("Dame un numero: "); 
    scanf("%d",&N1); 
    printf("Dame un segundo numero: "); 
    scanf("%d",&N2); 
    printf("Dame un tercer numero: "); 
    scanf("%d",&N3); 
    
    printf("El orden de los numeros es: ");
   
     
    if(N1>=N2 && N1>=N3) 
    { 
    if(N2>=N3) 
    { 
    printf("%d\n",N1); 
	printf("%d\n",N2); 
	printf("%d\n",N3); 
    } 
               
    if(N3>=N2) 
    { 
    printf("%d\n",N1); 
    printf("%d\n",N3); 
	printf("%d\n",N2); 
    } 
    } 
     
    else if(N2>=N1 && N2>=N3) 
    { 
    if(N1>=N3) 
    { 
	printf("%d\n",N2); 
    printf("%d\n",N1); 
    printf("%d\n",N3); 
    } 
               
    if(N3>=N1) 
    { 
    printf("%d\n",N2); 
    printf("%d\n",N3); 
	printf("%d\n",N1); 
    } 
    } 
     
    else if(N3>=N1 && N3>=N2) 
    {
    if(N1>=N2) 
    { 
    printf("%d\n",N3); 
	printf("%d\n",N1); 
    printf("%d\n",N2); 
    } 
               
	if(N2>=N1) 
	{ 
    printf("%d\n",N3); 
	printf("%d\n",N2); 
    printf("%d\n",N1); 
    } 
	}
	
}
}
