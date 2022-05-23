#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

float raio, area, pi=3.14;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do raio da pizza: ");
	scanf("%f",&raio);
	area= (raio*raio)/pi;
	printf("A área da pizza é %.2f cm",area);
}
