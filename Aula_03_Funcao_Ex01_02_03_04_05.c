#include <stdio.h>
#include <stdlib.h>

/*
1. Escreva uma fun��o que recebe um inteiro positivo m e escreve na tela todos os n�meros primos entre 0 e M.

2. Escreva uma fun��o que receba um dos lados de um quadrado e retorne o valor de sua �rea.

3. Escreva uma fun��o que receba um n�mero inteiro positivo n por par�metro e retorne a soma dos n primeiros inteiros positivos.

4. Fa�a uma fun��o que recebe um n�mero N que, caso seja positivo, calcule e exiba todos m�ltiplos de 5 entre 0 e N.

5. Escreva uma fun��o que imprima o seguinte menu e, de acordo com a op��o escolhida, execute o exerc�cio escolhido. 
O menu deve ser apresentado ap�s a finaliza��o do exerc�cio escolhido: 

	1. Exerc�cio 1: Primos at� M. 
	2. Exerc�cio 2: �rea do quadrado 
	3. Exerc�cio 3: Soma de 1 a n 
	4. Exerc�cio 4: M�ltiplos de 5 
	5. Sair
	
*/

int lerinteiroPositivo(char *texto){
	
	int n;
	
	do{
		printf("\n%s", texto);
		scanf("%d", &n);
		if(n <0)
			printf("\n O Numero informando nao e inteiro ");	
	}while(n<0);
	
	return n;
		
}

int menu(){
	
	printf("\n[1] Primos ate N:");
	printf("\n[2] A Area do quadro:");
	printf("\n[3] Somat�ria ate N:");
	printf("\n[4] Multiplico de  5:");
	printf("\n[5] Sair");
	int op = lerinteiroPositivo("\n Informe a opcao desejada: ");
	return op;
}

int primo(int n){
	
	int i=2;
	while(i <= n/2)
		if( n % i++ == 0)
			return 0;
	return 1;	
}

void exercio1(){
	
	int m = lerinteiroPositivo("\n Informe n:");
	int i;
	
	for(i=2; i<=m; i++)
		if(primo(i))
			printf("\n %d eh primo", i);
	
}

void exercio2(){
	
	int lado = lerinteiroPositivo("\n Informe um lado do quadrado: ");
	printf("\n Informe a area do quadrado:  %d ", lado*lado );
	
}

int somatorioAteN(int n){
	
	int soma =0;
	
	while(n >0)
		soma += n--;
	return soma;
	
}

void exercio3(){
	
	int n = lerinteiroPositivo("Informe N:");
	printf("O somatoria de %d = %d", n, somatorioAteN(n));
	
}

void exercio4(){
	
	int n = lerinteiroPositivo("Informe N:");
	int i;
	
	for(i=5; i<=n; i+= 5)
		if(n % 5 == 0)
			printf("\n%d e multiplico de 5", i);
	
}



int main(int argc, char *argv[]) {
	
	int op;
	
	do{
		op = menu();
		switch(op){
			case 1:
				exercio1();
				break;
			case 2:
				exercio2();
				break;
			case 3:
				exercio3();
				break;
			case 4:
				exercio4();
				break;
			case 5:
				printf("Ate logo!");
				break;
			default:
				printf("Opcao invalida!");
				break;				
		}
	}while(op != 5);
		
	return 0;
}

