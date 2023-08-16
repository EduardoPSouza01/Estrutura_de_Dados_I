/*2. Faça uma função que receba um número N
qualquer do usuário e imprima os N primeiros
números de Fibonacci.*/

#include <stdio.h>
#include <stdlib.h>

void fibo (int n){
	int pen=0;	//0 primeiro 
	int ult=1; //1 segundo
	int aux, i;
	
	for(i=0; i<n; i++){
		if(i < 2)
			printf("\n%d", i);
		else
			aux = ult + pen;
			pen = ult;
			ult = aux;
			printf("\n%d", ult);
	}
}

int main() {
		return 0;
}

