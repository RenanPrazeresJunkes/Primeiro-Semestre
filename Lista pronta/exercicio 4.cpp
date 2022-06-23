#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

char nome[30];
int idade,dias;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	printf("Digite a sua idade: ");
	scanf("%i",&idade);
	system("cls");
	dias= (idade*365);
	printf("%s , você já viveu %i dias",nome,dias);

}
