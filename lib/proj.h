#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <ctype.h>

enum colors{
    BLACK=0,
    BLUE=1,
    GREEN=2,
    CYAN=3,
    RED=4,
    MAGENTA=5,
    BROWN=6,
    LGREY=7,
    DGREY=8,
    LBLUE=9,
    LGREEN=10,
    LCYAN=11,
    LRED=12,
    LMAGENTA=13,
    YELLOW=14,
    WHITE=15
};

void SetColor(int Background, int Text){
    int colorTexto= Text + (Background*16);
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(terminal, colorTexto);    
}

void gotoxy(int x, int y)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void cont()
{
    SetColor (BLACK,BLUE);
    gotoxy(30,22);
    printf("<<PULSE CUALQUIER TECLA PARA CONTINUAR>>");
    getch();
    system("cls");
}

void margen()
{
	//cabecera
	int i;
	SetColor (BLACK,DGREY);
	gotoxy(25,2);
	printf("ESCUELA POLITECNICA NACIONAL");
	gotoxy(18,3);
	printf("CALCULADORA DE ECUACIONES DE SEGUNDO GRADO");
	gotoxy(3,4);
	printf("Integrantes: Alejandro Alvarez, Alejandro Aleman");
	for(i=1;i<=100;i++)
	{

		SetColor (BLACK,DGREY);
		gotoxy(i,1);
		printf(".");
		gotoxy(i,5);
		printf(".");
		gotoxy(i,25);
		printf(".");
	}
	for(i=1;i<=25;i++)
	{
		gotoxy(1,i);
		printf(".");
		gotoxy(100,i);
		printf(".");
	}
}
void fin()
{
    SetColor (BLACK,BLUE);
    gotoxy(30,22);
    printf("<<PULSE CUALQUIER TECLA PARA FINALIZAR>>");
    getch();
}