#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

int camisaPequena, camisaMedia, camisaGrande,valor;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de camisas pequena que foi comprada: ");
	scanf("%i",&camisaPequena);
	printf("Digite a quantidade de camisas média que foi comprada: ");
	scanf("%i",&camisaMedia);
	printf("Digite a quantidade de camisas grande que foi comprada: ");
	scanf("%i",&camisaGrande);
	system("cls");
	valor= (camisaPequena*10)+(camisaMedia*12)+(camisaGrande*15);
	printf(" O total da compra deu R$ %i",valor);
}
