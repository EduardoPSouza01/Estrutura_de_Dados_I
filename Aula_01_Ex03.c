/*3) Faça um programa que determine o maior e o menor
valor de uma sequência de N valores fornecidos pelo
usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, i, val,maior, menor;
	
	printf("Informe N:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Informe o %d o valor", i+1);
		scanf("%d", &val);
		
		if(i==0){
			maior = val;
			menor = val;
		}
		else{
			if(val > maior){
				maior = val;	
			}
			
			if(val < menor){
				menor = val;
			}
			
		}
	}
	
	printf("O menor valor eh: %d", menor );
	printf("O maior valor eh: %d", maior );
	
	return 0;
}
