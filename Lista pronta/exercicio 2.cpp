#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

int cavalos, ferraduras;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Quantos cavalos o haras possu�? ");
	scanf("%i", &cavalos);
	ferraduras= cavalos*4;
	system("cls");
	printf("S�o necess�rias %i ferraduras",ferraduras);
}
