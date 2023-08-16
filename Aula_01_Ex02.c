/*2) Faça um programa que leia um vetor de dez posições.
Em seguida, informe o menor e maior valor para o
usuário.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main() {
	
	int vet[MAX];
	int i, maior, menor, val;
	
	for(i=0; i<MAX; i++){
		printf("Informe o % o valor: ", i+1);
		scanf("%d", &vet[i]);
		
		if(i==0){
			maior = vet[i];
			menor = vet[i];
		}else{
			if(vet[i] > maior)
				maior = vet[i];
			if(vet[i] < menor)
				menor = vet[i];
		}
	}
	
	printf("O menor valor eh: %d", menor );
	printf("O maior valor eh: %d", maior );
	

	return 0;
}
