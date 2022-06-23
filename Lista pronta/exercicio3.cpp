#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

int broa, pao;
float resultadoconta, poupanca;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de broa que foi comprada: ");
	scanf("%i",&broa);
	printf("Digite a quantidade de pão que foi comprada: ");
	scanf("%i",&pao);
	system("cls");
	resultadoconta= (pao*0.12)+(broa*1.50);
	printf(" Arrecadação do dia: R$ %.2f",resultadoconta);
	poupanca=resultadoconta*0.10;
	printf("\n Você deve guardar R$ %.2f na conta.",poupanca);
}
