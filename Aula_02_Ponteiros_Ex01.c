/*1. Faça uma programa usando função, que receba um
valor inteiro n e retorne o fatorial de n.*/

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

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, fatorial(n));
	
	return 0;
}


