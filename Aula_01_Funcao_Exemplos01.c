/*1. Faça uma função que receba um número inteiro e determine se ele é par ou ímpar.
¨ A função deverá retornar 1 se for par e 0 senão for par.*/

int ehpar(int n){

// deixando a função ternária	 mais curta
	return !(n%2); 

	
/*		
-------------------------------------------------------
função ternário 

	return n%2 == 0 ? 1 : 0;    
		
---------------------------------------------------------
segundo modo de fazer a função  
	
	if (n % 2 == 0)
		return 1;	
	else 
		return 0;    

-------------------------------------------------------------
primeiro modo de fazer a função 

	int par;
	
	if (n % 2 == 0)
		par = 1;
	else 
		par = 0; 	 

	return 0;*/
}



int main() {
	
	int val;
	
	printf("Informe um valor: ");
	scanf("%d", &val);
	
	if(ehpar(val)){
		printf("%d eh par", val);
	}else{
		printf("%d nao eh par", val);
	}
	
	
	return 0;
}

