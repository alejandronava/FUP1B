#include <stdio.h>// libreria de E/S
/*programa que realice las conversiones de mg a cualquier unidad de medida de una computadora ;
*/
int bit;
int kilobyte ;
int gigabyte;
int terabyte;
int main()
{// inicio
float N1,bit,kilobyte,gigabyte,terabyte;
printf("Dame la cantidad a convertir:");
scanf("%f",&N1);
bit= N1/1024/1024;
kilobyte=N1/1024;
gigabyte=N1*1024;
terabyte=N1*1024*1024;
printf("\nLa cantidad de mb a bits es:%f",bit);
printf("\nLa cantidad de mb a kb es:%f",kilobyte);
printf("\nLa cantidad de mb a gb es:%f",gigabyte);
printf("\nLa cantidad de mb a tb es:%f",terabyte);
}// fin
