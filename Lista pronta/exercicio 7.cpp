#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

int dia, mes, totaldias;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o dia: ");
	scanf("%i",&dia);
	printf("Digite o n�mero do m�s: ");
	scanf("%i",&mes);
	totaldias=((mes-1)*30)+dia;
	printf("J� se passaram %i dias desde o in�cio do ano.",totaldias);
}
