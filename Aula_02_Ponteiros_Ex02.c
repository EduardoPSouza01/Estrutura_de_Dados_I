/*2. Faça um programa usando função, que receba um
valor inteiro n e retorne a soma dos n primeiros termos
da série:

1+ 1/1! + 1/2! + 1/3! + ... + 1/n!

Utilize a função fatorial.*/

#include <stdio.h>
#include <stdlib.h>


int fatorial(int n){
	int i;
	int res=1; // 0! = 1
	
	for(i=n; i>0; i--){
		res *= i;
	}
	return res;
		
}

float serie(int n){
	int i;
	float soma=1;
	for(i=1; i<=n; i++){
		soma += (float)1 / fatorial(i);   // Segunda maneira de fazer  --->   soma += 1.0 / fatorial(i);
	}
	return soma;
}
int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, fatorial(n));
	printf("\n Resultado		: %.10f", serie(n));
	
	return 0;
}


