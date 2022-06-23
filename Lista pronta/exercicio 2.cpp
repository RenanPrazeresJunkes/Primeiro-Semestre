#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

int cavalos, ferraduras;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Quantos cavalos o haras possuí? ");
	scanf("%i", &cavalos);
	ferraduras= cavalos*4;
	system("cls");
	printf("São necessárias %i ferraduras",ferraduras);
}
