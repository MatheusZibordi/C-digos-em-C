#include <stdio.h> 

int main() { 

	int a,b,c,d,soma; 
 
	printf("Entre com o primeiro numero:"); 
	scanf("%d",&a); 
	printf("Entre com o segundo numero:"); 
	scanf("%d",&b); 
	printf("Entre com o terceiro numero:"); 
	scanf("%d",&c); 
	printf("Entre com o quarto numero:"); 
	scanf("%d",&d); 

	if (a % 2 == 0){
		soma=soma+a;
	} 
	if (b % 2 == 0){ 
		soma=soma+b; 
	}
	if (c % 2 == 0){
		soma=soma+c; 
	}
	if (d % 2 == 0){
		soma=soma+d; 
	}

	printf("Soma dos numeros Pares: %d",soma); 

}