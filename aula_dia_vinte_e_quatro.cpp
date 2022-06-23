/* Construa um algoritmo que leia dois vetores de 5 posições inteiras e gere um menu de opções
com os seguintes itens:
1soma= vet1+vet2= vet3
2subtração= vet1-vet2=vet3
3multiplicação= vet1*vet2=vet3
4divisão=vet1/vet2=vet3 
5=novos valores para vet 1 e vet 2
6=sair*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

float vetUm[5], vetDois[5], menus, vetTres[5];

int entradadedados(){
			for(int i=0; i<5; i++){
			printf("Digite os valores do primeiro vetor: ");
			scanf("%f", &vetUm[i]);}
			printf("\n \n");
		for(int i=0; i<5; i++){
			printf("Digite os valores do segundo vetor: ");
			scanf("%f", &vetDois[i]);}
			system("cls");
}
void menu(){
		printf("digite 1 para somar \n");
		printf("Digite 2 para subtrair \n");
		printf("Digite 3 para multiplicar \n");
		printf("Digite 4 para dividir \n");
		printf("Digite 5 para novos valores da vet1 e vet 2 \n");
		printf("Digite 6 para sair \n");
	scanf("%f",&menus);
}
void soma(){
	for(int i=0; i<5; i++){
		vetTres[i]= vetUm[i] +vetDois[i];
}
}
void subtracao(){		
		for(int i=0; i<5; i++){
			vetTres[i]= vetUm[i] -vetDois[i];
	}
}
void multiplicacao(){		
		for(int i=0; i<5; i++){
			vetTres[i]= vetUm[i] *vetDois[i];
		
	}
}
void divisao(){
	for(int i=0; i<5; i++){
		vetTres[i]= vetUm[i] /vetDois[i];
	}		
	}
void vetUmMostrar(){
	for(int i=0; i<5; i++){
		printf("%.2f",vetUm[i]);
		printf(" , ");
}}
void vetDoisMostrar(){
		for(int i=0; i<5; i++){
		printf("%.2f",vetDois[i]);
		printf(" , ");
}}
void vetTresMostrar(){
		for(int i=0; i<5; i++){
		printf("%.2f",vetTres[i]);
		printf(" , ");
}}

int main(){
	entradadedados();
	while(menus!=6){
	
	menu();
	if(menus==1){
	soma();
	}
	if(menus==2){
		subtracao();
	}
	if(menus==3){
		multiplicacao();
	}
	if(menus==4){
		divisao();
	}
	if(menus==5){
		entradadedados();
	}
	system("cls");
	printf("\nVetor Um:\n");
	vetUmMostrar();
	printf("\n Vetor Dois:\n");
	vetDoisMostrar();
	printf("\n Vetor Tres:\n");
	vetTresMostrar();}	
}
