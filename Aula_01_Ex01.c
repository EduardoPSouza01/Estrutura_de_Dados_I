/*1) Faça um programa que leia um vetor de 10 posições.
Após a leitura, defina qual é o valor do vetor mais
próximo da média dos valores do vetor.*/

#include <stdio.h>
#include <stdlib.h> 
#include <math.h> //fabs transformar o número em positivo.


#define MAX 10


int main() {
	
	int vet[MAX];
	int i, pos;
	float media = 0;

	for(i=0; i<MAX; i++){
		printf("Informe o %d o valor: ", i+1);
		scanf("%d", &vet[i]);
		media += (float)vet[i]/MAX;
	}
	
	printf("\n Media %.2f", media);
	pos = 0;
	
	for(i=1; i<MAX; i++){
		if(fabs(vet[i] - media) < fabs(vet[pos] - media))
			pos = i;
	}
	
	printf("O valor mais próximo da média (%.2f) eh: %d", media, vet[pos] );
	
	return 0;
}
