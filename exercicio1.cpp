#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

float ladoUm,ladoDois,area;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor da largura do terreno: ");
	scanf("%f",&ladoDois);
	printf("Digite o valor da altura do terreno: ");
	scanf("%f",&ladoUm);
	system("cls");
	area=ladoUm*ladoDois;
	printf("A �rea do terreno � %.2f.", area);
}
