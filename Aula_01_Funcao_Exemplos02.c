/*2. Faça uma função que receba um número
inteiro e determine se ele é primo ou não.*/


#include <stdio.h>
#include <stdlib.h>

int primo(int n){

	int i=2;
	
 // código mais curto 

	while(i <= n/2){
		if(n % i++ == 0)
			return 0;    
	}
	
	return 1;
	
/*	
----------------------------------------------
	código mais completo 

	while(i <= n/2 && primo){
		if(n % i == 0){
			primo = 0;
		}
		i++;       
	}
	
	return primo;
----------------------------------------------	
*/

	
}


int main() {
	
	int val;
	
	printf(" Informe um valor:");
	scanf("%d", &val);
	
	if(primo(val))
		printf("%d eh primo:", val);
	else
		printf("%d nao eh primo:", val);
	
	return 0;
}
