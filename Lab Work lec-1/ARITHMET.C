#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 50,b = 2, add , sub , multi;
	float div , modulo;
	clrscr();
	add = a+b;
	sub = b-a;
	multi = a * b;
	div = a/b;
	modulo = b%a;
	printf("\nAddition of a and b is ==> %d",add); //+
	printf("\nSubtraction of b and a is ==> %d",sub); //-
	printf("\nMultiplication of a and b is ==> %d",multi); //*
	printf("\nDivision of a and b is ==> %f",div); // /
	printf("\nModulo of a and b is ==> %.2f", modulo); // %
	getch();
}
