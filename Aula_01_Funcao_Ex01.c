/*1. Calculadora
¨ Faça uma calculadora com as quatro operações básicas: soma, subtração, multiplicação e divisão.
¨ Caso o usuário tente realizar a divisão por zero, deverá ser informado que não é possível realizar a divisão.
¨ Duas formas de resolver: funções para cada operação ou uma função com um parâmetro extra com a operação.*/


#include <stdio.h>
#include <stdlib.h>


void calculadora(int op, float n1, float n2){
	
	switch(op){
		case 1:
			printf("%.2f + %.2f =%.2f", n1, n2, n1+n2);
			break;
		case 2:
			printf("%.2f - %.2f =%.2f", n1, n2, n1-n2);
			break;
		case 3:
			printf("%.2f * %.2f =%.2f", n1, n2, n1*n2);
			break;
		case 4:
			if(n2==0)
				printf("Nao eh possivel dividir por zero");
			else
				printf("%.2f / %.2f =%.2f", n1, n2, n1/n2);
			break;
		default:
			printf("Operacao Invalida");
			break;
	}
	
}

int main() {

	int op; 
	float n1, n2;
	
	
	printf("Informe as operações	 \n 1-Soma \n 2-Sub \n 3-Multri \n 4-Divi \n Opcao");
	scanf("%d", &op);
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("Informe o Segundo valor: ");
	scanf("%f", &n2);
	
	calculadora(op, n1, n2);
	
	return 0;
}


