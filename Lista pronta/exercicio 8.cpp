#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

float notaUm, notaDois, notaTres,resultado;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a nota 1: ");
	scanf("%f",&notaUm);
	printf("Digite a nota 2: ");
	scanf("%f",&notaDois);
	printf("Digite a nota 3: ");
	scanf("%f",&notaTres);
	resultado= ((notaUm*1)+ (notaDois*2)+(notaTres*3))/6;
	printf("A média do aluno na disciplina foi %.2f",resultado);
}
