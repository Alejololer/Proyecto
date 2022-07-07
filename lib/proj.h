#include <stdio.h>
#include <windows.h>

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
    SetColor (BLACK,WHITE);
}
void margin()
{
	//cabecera
	int i;
	SetColor (BLACK,DGREY);
	gotoxy(35,2);
	printf("ESCUELA POLITECNICA NACIONAL");
	gotoxy(30,3);
	printf("CALCULADORA DE ECUACIONES DE SEGUNDO GRADO");
	gotoxy(3,4);
	printf("Integrantes: Alejandro Alvarez, Alejandro Aleman");
    //
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
void end()
{
    SetColor (BLACK,BLUE);
    gotoxy(30,22);
    printf("<<PULSE CUALQUIER TECLA PARA FINALIZAR>>");
    getch();
}
char conDeg()
{
    char con;
    do
	{	
		system("cls");
		margin();
		SetColor(BLACK,GREEN);
		gotoxy(7,7);
		printf("Continuar usando 2nd Deg Calc (y)");
		gotoxy(7,8);
		printf("Para salir de 2nd Deg Calc (x)");
		gotoxy(7,9);
		SetColor(BLACK,WHITE);
		printf("--> ");
		scanf(" %c",&con);
		if(con=='x'||con=='y')
			break;
		gotoxy(7,10);
		printf("La entrada no fue valida, intentelo de nuevo");
		cont();
	} while(true);
    return con;
}