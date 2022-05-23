#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <cmath>

float xPontoUm,yPontoUm,xPontoDois,yPontoDois,distancia;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o X do ponto 1: ");
	scanf("%f",&xPontoUm);
	printf("Digite o Y do ponto 1: ");
	scanf("%f",&yPontoUm);
	printf("Digite o X do ponto 2: ");
	scanf("%f",&xPontoDois);
	printf("Digite o Y do ponto 2: ");
	scanf("%f",&yPontoDois);
	distancia = sqrt(((xPontoDois-xPontoUm)*(xPontoDois-xPontoUm))+((yPontoDois-yPontoUm)*(yPontoDois-yPontoUm)));
	printf("A distância entre os dois pontos é %.2f",distancia);
}


