/*3. Faça uma função que receba, por referência, dois
parâmetros inteiros a e b que, ao final da função o
maior valor entre a e b deverá estar armazenado em a
e o menor em b no main.*/

#include <stdio.h>
#include <stdlib.h>

void organizar(int *x, int *y){
	if(*y > *x){
		int aux = *y;
		*y =*x;
		*x = aux;
	}	
}

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("Infomer A:" );
	scanf("%d", &a);
	
	printf("Infomer B:" );
	scanf("%d", &b);
	
	organizar(&a, &b);
	
	printf("Organizaçao A= %d | B= %d", a,b);
		
	return 0;
}



/*

------------------Usando ternário--------------

void respota(int *a, int *b){
	
	int valorA, valorB;
	
	valorA = *a > *b ? *a : *b;
   	valorB = *a < *b ? *a : *b;
    
	printf("\nValor de A: %d", valorA);
   	printf("\nValor de B: %d", valorB);
}

int main() {
    int a, b;
   // int valorA, valorB;

    // Solicita os valores de A e B ao usuário
    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    
    respota(&a, &b);

    return 0;
}


    

 --------------------------------- Caso não for usar o ponteiro ---------------------------------------
 
    Atribui o maior valor a valorA e o menor valor a valorB
     
   ---- Segunda forma de fazer usando operador ternário -----
   
    valorA = a > b ? a : b;
    valorB = a < b ? a : b;
    
    
    Usando o IF para fazer o teste logico 

	------ primeira forma de fazer -----
	
	if(a > b){
		valorA = a;
	}else{
		valorA = b;
	}

	if(a < b){
		valorB = a;
	}else{
		valorB = b;
	} 
	
 

    Exibe os valores de A e B
    printf("\nValor de A: %d", valorA);
    printf("\nValor de B: %d", valorB);



*/  


