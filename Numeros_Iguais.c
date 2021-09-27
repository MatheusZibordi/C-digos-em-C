#include<stdio.h>

int main(){
	int a, b;
	
	printf("Digite um numero para A: ");
	scanf("%d",&a);
	printf("\nDigite um numero para B: ");
	scanf("%d",&b);
	
	if(a != b){
		printf("Os numeros sao diferentes.....\n\n");		
	}else{
		printf("Os numeros sao iguais......\n\n");
	}
}