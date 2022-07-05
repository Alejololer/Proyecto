#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <fcntl.h>
#include "../lib/proj.h"
void margen();
int main()
{
	//inicialización
	SetColor (BLACK,WHITE);
	SetColor (BLACK,LBLUE);
	system("cls");
	float a,b,c,s1,s2,d,raiz,raiz1,va;
	const int mm=241, si=253; 
	
margen();
	//Inicio y Display
	SetColor (BLACK,GREEN);
	gotoxy(34,7);
	printf("2nd Degree Calc");
	SetColor (BLACK,LGREY);
	gotoxy(7,8);
	printf("x%c+(", si);
	gotoxy(18,8);
	printf(")x+(");
	gotoxy(28,8);
	printf(")=0");
	SetColor (BLACK,WHITE);
	gotoxy(2,8);
	scanf("%f", &a);
	gotoxy(12,8);
	scanf("%f", &b);
	gotoxy(22,8);
	scanf("%f", &c);
	float a1= a;
    float b1= b;
    float c1= c;
    va=abs ((b*b)-4*a*c);
    raiz= sqrt(va);
			s1=(-b+(raiz))/(2*a);
			s2=(-b-(raiz))/(2*a);
    if(a == 0)
    {
        gotoxy(2,15);
        printf("No existe solucion para el ejercicio");

		fin();
    return 0;
    }
    else
    {
		//Calculo del determinante y determinación de las soluciones
    	d=(b*b)-(4*a*c);
    	gotoxy(4,10);
    	printf("d = b%c - 4(a)(c)", si);
		gotoxy(4,11);
		printf("d = (%.2f)%c - 4(%.2f)(%.2f)",b1,si,a1,c1);
		gotoxy(4,12);
		printf("d = %.2f - %.2f",b1*b1,4*a1*c1);
		gotoxy(4,13);
		printf("d = %.2f", (b1*b1)-4*a1*c1);
		//Declaración de los casos dependiendo del determinante
		if(d > 0)
			{
			gotoxy(3,16);
			printf("d > 0");
			gotoxy(12,16);
			printf("Hay 2 soluciones reales diferentes");
		}
		else if(d < 0)
			{
				gotoxy(3,16);
				printf("d < 0");
				gotoxy(12,16);
				printf("No hay soluciones reales, hay 2 soluciones complejas distintas");
			}
		else
			{
				gotoxy(3,16);
				printf("d = 0");
				gotoxy(12,16);
				printf("Hay 2 soluciones reales iguales");
			}
    }  
		//Proceso de continuación
		cont();
		//Reinicio del Display
    	margen();
    	
    	//Resolucion formula general
    	
		SetColor(BLACK,WHITE);
   

	gotoxy(7,8);
	printf("x = -b %c Vb%c - 4(a)(c)",mm,si);
	printf("/(2(a))");
	 gotoxy(17,7);
	printf("____________");
	//Calculo primera solución
	
	gotoxy(28,10);
	printf("______________________________");
	gotoxy(59,11);
	printf("/ (2(%.2f))",a1);
	gotoxy(7,11);
	printf("x1 = -(%.2f) + ",b1);
	gotoxy(27,11);
	printf("V(%.2f)%c - 4(%.2f)(%.2f)",si,b1,a1,c1);
	gotoxy(26,13);
	printf("_______________________________");
	gotoxy(7,14);
	printf("x1 = %.2f + ",b1*(-1));
	gotoxy(25,14);
	printf("V%.2f - %.2f",b1*b1,4*a1*c1);
	gotoxy(57,14);
	printf("/ (%.2f)",2*a1);
	
	gotoxy(26,16);
	printf("________________");
	gotoxy(42,17);
	printf("/ (%.2f)",2*a1);
	gotoxy(7,17);
	printf("x1 = %.2f +",b1*(-1),(b1*b1)-(4*a*c));
	gotoxy(25,17);
	printf("V%.2f",(b1*b1)-(4*a*c));	
	raiz1=sqrt((b1*b1)-(4*a1*c1));
	int r=raiz1;
	gotoxy(23,19);
	printf("x1 = %f",s1);
	if(d<0)
    {
        printf("i");
    }
	//Proceso de continuación
	cont();
	//Reinicio del display
	margen();
    	
	//Chequeo si las soluciones son iguales, para no hacer procesos innecesarios	

	if(d==0)
	{
		SetColor(BLACK,WHITE);
		gotoxy(7,8);
		printf("La segunda solucion es igual a la primera.\n");
		gotoxy(7,9);
		printf("x = %.2f",s1);
		fin();
		return 0;
	}

    //Calculo de la segunda solución
	SetColor(BLACK,WHITE);
    gotoxy(7,8);
	printf("x = -b %c Vb%c - 4(a)(c)",mm,si);
	printf("/(2(a))");
	gotoxy(17,7);
	printf("____________");
   
    gotoxy(28,10);
	printf("______________________________");
	gotoxy(59,11);
	printf("/ (2(%.2f))",a1);
	gotoxy(7,11);
	printf("x2 = -(%.2f) - ",b1);
	gotoxy(27,11);
	printf("V(%.2f)%c - 4(%.2f)(%.2f)",si,b1,a1,c1);
	gotoxy(26,13);
	printf("_______________________________");
	gotoxy(57,14);
	printf("/ (%.2f)",2*a1);
	gotoxy(7,14);
	printf("x2 = %.2f - ",b1*(-1));
	gotoxy(25,14);
	printf("V%.2f - %.2f",b1*b1,4*a1*c1);
	gotoxy(26,16);
	printf("________________");
	gotoxy(42,17);
	printf("/ (%.2f)",2*a1);
	gotoxy(7,17);
	printf("x2 =%.2f - ",b1*(-1));
	gotoxy(25,17);
	printf("V%.2f - %.2f",(b1*b1)-(4*a*c));  
	raiz1=sqrt((b1*b1)-(4*a1*c1));
	gotoxy(23,19);
	printf("x2 =%f",s2);
	if(d<0)
    {
        printf("i");
    }
	fin();
	return 0;
}

    

    
    
