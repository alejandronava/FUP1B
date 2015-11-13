#include<stdio.h>

int main(){
int p,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,q,resultado,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7,resultado8;

printf("PROGRAMA DEL CANGREJO\n");
printf("\nDame la profundidad del agujero:\n");
scanf("%d",&p);
printf("Dime los metros que avanzo:\n");
scanf("%d",&a);
printf("Dime los metros que retrocedio:\n");
scanf("%d",&b);
{





resultado=a-b;
if(resultado>p)
{
	printf("El cangrejo salio del agujero\n");	
	printf("SALIO EN 1 DIA");
	return 0;	

}

}
printf("\nDime los metros que avanzo al siguiente dia:\n");
scanf("%d",&c);
printf("Dime los metros que retrocedio al siguiente dia:\n");
scanf("%d",&d);
{
	resultado2=resultado+c-d;
	if(resultado2>p)
{
	printf("El cangrejo alio del agujero\n");
	printf("SALIO EN 2 DIAS");
	return 0;
}

}
printf("dime los metros que avanzo el siguiente dia:\n");
scanf("%d",&e);
printf("dime lo que retrocedio el siguiente dia:\n");
scanf("%d",&f);
{

	resultado3=resultado2+e-f;
	if(resultado3>p)
{
	printf("El cangrejo salio del agujero\n");
	printf("SALIO EN 3 DIAS");
	return 0;
}
}
printf("Dime los metros que avanzo el sigueinte dia:\n");
scanf("%d",&g);
printf("Dime los metros que retrocedio el siguiente dia:\n");
scanf("%d",&h);
{
	resultado4=resultado3+g-h;
	if(resultado4>p)
{

	printf("El cangrejo salio del agujero\n");
	printf("SALIO EN 4 DIAS");
	return 0;
}
}
printf("Dime los metros que avanzo el sigueinte dia:\n");
scanf("%d",&i);
printf("Dime los metros que retrocedio el siguiente dia\n:");
scanf("%d",&j);
{
	resultado5=resultado4+i-j;
	if(resultado5>p)
{

	printf("El cangrejo salio del agujero\n");
	printf("SALIO EN 5 DIAS");
	return 0;
}
}
printf("Dime los metros que avanzo el sigueinte dia\n:");
scanf("%d",&k);
printf("Dime los metros que retrocedio el siguiente dia\n:");
scanf("%d",&l);
{
	resultado6=resultado5+k-l;
	if(resultado6>p)
{

	printf("El cangejo salio del agujero\n");
	printf("SALIO EN 6 DIAS");
	return 0;
}
}
printf("Dime los metros que avanzo el sigueinte dia\n:");
scanf("%d",&m);
printf("Dime los metros que retrocedio el siguiente dia\n:");
scanf("%d",&n);
{
	resultado7=resultado6+m-n;
	if(resultado7>p)
{

	printf("El cangrejo salio del agujero\n");
	printf("SALIO EN 7 DIAS");
	return 0;
}
}
printf("Dime los metros que avanzo el sigueinte dia\n:");
scanf("%d",&o);
printf("Dime los metros que retrocedio el siguiente dia\n:");
scanf("%d",&q);
{
	resultado8=resultado7+o-q;
	if(resultado8>p)
{

	printf("El cangrejo salio del agujero\n");
	printf("SALIO EN 8 DIAS");
	return 0;
}
}
}



