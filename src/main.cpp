#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <fcntl.h>
#include "../lib/proj.h"
int menu()
{
	//Pedida de entrada
	int input;
	do
	{
		system("cls");
		margin();
		SetColor(BLACK,GREEN);
		gotoxy(7,8);
		printf("Bienvenido a CalcuMax");
		gotoxy(7,9);
		printf("Elija la herramienta que va a usar:");
		gotoxy(7,10);
		printf("1. Cerrar el programa");
		gotoxy(7,11);
		printf("2. Calculadora ");
		gotoxy(7,12);
		printf("3. Calculadora Cuadratica");
		gotoxy(7,13);
		SetColor(BLACK,WHITE);
		printf("(+) ");
		scanf(" %i",&input);
		SetColor(BLACK,GREEN);
		if(input<1||input>3)
		{
			gotoxy(7,14);
			printf("Opcion no valida, intentelo de nuevo");
			cont();
		}
	}while(input<0||input>3);
	//Anunciación de la entrada
	if(input==1)
	{
		gotoxy(7,14);
		printf("Cerrando el programa....Hasta luego!");
	} else if(input==2)
	{
		gotoxy(7,14);
		printf("Abriendo la Calculadora...");
	} else if(input==3)
	{
		gotoxy(7,14);
		printf("Abriendo la Calculadora Cuadratica");
	}
	return input;
}

void quadcalc()
{
//inicializacion
float a1,b1,c1,s1,s2,d,raiz,raiz1,va;
const int mm=241, si=253; 
char con;

do
{	
	do
	{
		do
		{	system("cls");
			margin();
			//Inicio y Display
			SetColor (BLACK,GREEN);
			gotoxy(7,7);
			printf("Bienvenido a 2nd Degree Calc, ingrese los valores de su funcion:");
			SetColor (BLACK,LGREY);
			gotoxy(7,8);
			printf("x%c+(", si);
			gotoxy(18,8);
			printf(")x+(");
			gotoxy(28,8);
			printf(")=0");
			SetColor (BLACK,WHITE);
			gotoxy(2,8);
			scanf("%f", &a1);
			gotoxy(12,8);
			scanf("%f", &b1);
			gotoxy(22,8);
			scanf("%f", &c1);
			va=abs ((b1*b1)-4*a1*c1);
			raiz= sqrt(va);
					s1=(-b1+(raiz))/(2*a1);
					s2=(-b1-(raiz))/(2*a1);
			if(a1 == 0)
			{
				gotoxy(2,15);
				printf("No existe solucion para el ejercicio");
				cont();
				if(conDeg()=='x')
				{	
					end();
					return;
				}
				else 
					continue;
			}
			else
				break;
			
		} while(true);
			//Calculo del determinante y determinaci�n de las soluciones
		d=(b1*b1)-(4*a1*c1);
		gotoxy(4,10);
		printf("d = b%c - 4(a)(c)", si);
		gotoxy(4,11);
		printf("d = (%.2f)%c - 4(%.2f)(%.2f)",b1,si,a1,c1);
		gotoxy(4,12);
		printf("d = %.2f - (%.2f)",b1*b1,4*a1*c1);
		gotoxy(4,13);
		printf("d = %.2f", (b1*b1)-4*a1*c1);
		//Declaraci�n de los casos dependiendo del determinante
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
			//Proceso de continuaci�n
		cont();
		//Reinicio del Display
		system("cls");
		margin();
		
		//Resolucion formula general
			
	

		gotoxy(7,8);
		printf("x = -b %c Vb%c - 4(a)(c)",mm,si);
		printf("/(2(a))");
		gotoxy(17,7);
		printf("____________");

		//Proceso de continuaci�n
		cont();
		

		//Calculo primera soluci�n
		
		gotoxy(28,10);
		printf("______________________________");
		gotoxy(59,11);
		printf("/ (2(%.2f))",a1);
		gotoxy(7,11);
		printf("x1 = -(%.2f) + ",b1);
		gotoxy(27,11);
		printf("V(%.2f)%c - 4(%.2f)(%.2f)",b1,si,a1,c1);
		//Proceso de continuaci�n
		cont();
		

		gotoxy(26,13);
		printf("________________________________");
		gotoxy(7,14);
		printf("x1 = %.2f + ",b1*(-1));
		gotoxy(25,14);
		printf("V%.2f - (%.2f)",b1*b1,4*a1*c1);
		gotoxy(57,14);
		printf("/ (%.2f)",2*a1);
		//Proceso de continuaci�n
		cont();

		gotoxy(26,16);
		printf("________________");
		gotoxy(42,17);
		printf("/ (%.2f)",2*a1);
		gotoxy(7,17);
		printf("x1 = %.2f +",b1*(-1),(b1*b1)-(4*a1*c1));
		gotoxy(25,17);
		printf("V%.2f",(b1*b1)-(4*a1*c1));	
		raiz1=sqrt((b1*b1)-(4*a1*c1));
		int r=raiz1;
		//Proceso de continuaci�n
		cont();

		gotoxy(7,20);
		printf("x1 = %f",s1);
		if(d<0)
		{
			printf("i");
		}
		//Proceso de continuaci�n
		cont();
		//Reinicio del display
		system("cls");
		margin();
			
		//Chequeo si las soluciones son iguales, para no hacer procesos innecesarios	

		if(d==0)
		{
			SetColor(BLACK,GREEN);
			gotoxy(7,8);
			printf("La segunda solucion es igual a la primera debido a que d = 0.\n");
			gotoxy(7,11);
			SetColor(BLACK,WHITE);
			printf("x = %.2f",s1);
			cont();
		} else
			break;
	} while(conDeg()=='y');
    //Calculo de la segunda soluci�n
    gotoxy(7,8);
	printf("x = -b %c Vb%c - 4(a)(c)",mm,si);
	printf("/(2(a))");
	gotoxy(17,7);
	printf("____________");
   	//Proceso de continuaci�n
    cont();

    gotoxy(28,10);
	printf("______________________________");
	gotoxy(59,11);
	printf("/ (2(%.2f))",a1);
	gotoxy(7,11);
	printf("x2 = -(%.2f) - ",b1);
	gotoxy(27,11);
	printf("V(%.2f)%c - 4(%.2f)(%.2f)",b1,si,a1,c1);
	//Proceso de continuaci�n
    cont();

	gotoxy(26,13);
	printf("_______________________________");
	gotoxy(57,14);
	printf("/ (%.2f)",2*a1);
	gotoxy(7,14);
	printf("x2 = %.2f - ",b1*(-1));
	gotoxy(25,14);
	printf("V%.2f - (%.2f)",b1*b1,4*a1*c1);
	//Proceso de continuaci�n
    cont();

	gotoxy(26,16);
	printf("________________");
	gotoxy(42,17);
	printf("/ (%.2f)",2*a1);
	gotoxy(7,17);
	printf("x2 = %.2f - ",b1*(-1));
	gotoxy(25,17);
	printf("V%.2f",(b1*b1)-(4*a1*c1));  
	raiz1=sqrt((b1*b1)-(4*a1*c1));
	//Proceso de continuaci�n
    cont();

	gotoxy(7,20);
	printf("x2 =%f",s2);
	if(d<0)
    {
        printf("i");
    }
	cont();
	
} while(conDeg()=='y');
	end;
	return;
}

void calc()
{
	//Inicialización
	int c;
	float val1,val2, resul;
	char op,con;
	do
	{
		//Pedida primer valor y display
		system("cls");
		margin();
		SetColor(BLACK,GREEN);
		gotoxy(7,7);
		printf("Bienvenido a la Calculadora, ingresa el primer valor a usar:");
		gotoxy(7,8);
		SetColor(BLACK,WHITE);
		printf("--> ");
		scanf(" %f",&val1);

		do
		{
			do
			{
				//Pedida de operador
				system("cls");
				margin();
				SetColor(BLACK,GREEN);
				gotoxy(7,7);
				printf("Ingresa el operador de tu operación");
				SetColor(BLACK,WHITE);
				gotoxy(7,8);
				printf("--> ");
				while ( (c = getchar()) != EOF && c != '\n') { }
				scanf(" %c",&op);
				if(op=='+'||op=='-'||op=='*'||op=='/')
				{	
					break;
				}
				SetColor(BLACK,GREEN);
				printf("Operador invalido, ingreselo de nuevo");
				cont();
			} while(true);

			//Pedida de siguiente valor
			system("cls");
			margin();
			gotoxy(7,7);
			SetColor(BLACK,GREEN);
			printf("Ingresa el siguiente valor:");	
			gotoxy(7,8);
			SetColor(BLACK,WHITE);
			printf("--> ");
			scanf(" %f",&val2);
			//declaración de operaciones
			switch(op)
			{
				case '+':resul=val1+val2; break;
				case '*':resul=val1*val2; break;
				case '-':resul=val1-val2; break;
				case '/':resul=val1/val2; break;
			}

			do
			{	system("cls");
				margin();
				SetColor(BLACK,GREEN);
				gotoxy(7,7);
				printf("El resultado es:");	
				gotoxy(7,8);
				SetColor(BLACK,WHITE);
				printf("-->%f",resul);
				SetColor(BLACK,GREEN);
				gotoxy(7,9);
				printf("Continuar usando el resultado (y)");
				gotoxy(7,10);
				printf("Regresar al ingreso del primer valor (n)");
				gotoxy(7,11);
				printf("Para salir de la Calculadora (x)");
				gotoxy(7,12);
				SetColor(BLACK,WHITE);
				printf("--> ");
				scanf(" %c",&con);
				val1=resul;
				if(con=='n'||con=='x'||con=='y')
					break;
				gotoxy(7,13);
				SetColor(BLACK,GREEN);
				printf("La entrada no fue valida, intentelo de nuevo");
				cont();
			} while(true);
			if(con=='n'||con=='x')
				break;
		} while(true);
		if(con=='x')
			break;
	} while(true);
	end();
	return;
}

int main()
{
	do
	{	switch(menu())
		{
			case 1: end(); exit(EXIT_SUCCESS);
			case 2: calc(); break;
			case 3: system("cls");printf("funca antes"); quadcalc(); printf("funca?"); break;
		}
	} while(true);
}

    

    
    
