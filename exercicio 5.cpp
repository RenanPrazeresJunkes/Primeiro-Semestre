#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
float gasolina, preco, valor;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do pre�o da gasolina: ");
	scanf("%f", &preco);
	
	printf("Digite o valor que  ir� ser colocado de gasolina: ");
	scanf("%f", &valor);	
	gasolina = valor/preco;
	printf("O total de litros de gasolina ser� %.2f litros",gasolina);
}
