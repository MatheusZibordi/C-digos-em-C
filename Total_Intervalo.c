#include<stdio.h>
#include<stdlib.h>

int SomaIntervalo(int a, int b, int c){
	int maior=0, menor=0, soma=0,i;
	
	if(b < c){
		menor = b;
		maior = c;
	}else{
		menor = c;
		maior = b;
	}
	for(i = menor; i<=maior;i++){
		if(i%a==0){
			soma = soma + i;
		}
	}
	return soma;
}

int main(){
	int a, b, c, total;
	
	printf("\nDigite o Primeiro Valor\n");
	scanf("%d",&a);
	printf("\nDigite o Segundo Valor\n");
	scanf("%d",&b);
	printf("\nDigite o Terceiro Valor\n");
	scanf("%d",&c);
	
	total = SomaIntervalo(a,b,c);
	
	printf("\nTotal do Intervalo %d",total);
}