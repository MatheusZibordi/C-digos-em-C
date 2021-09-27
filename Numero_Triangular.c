#include<stdio.h>

int main(){
	
	int n,i,aux;
	
	printf("Digite um numero inteiro:  ");
	scanf("%d", &n);

	for(i = 1, aux = 0; (i*(i+1)*(i+2)) < n+1; i++){
		if((i*(i+1)*(i+2)) == n){
			aux = 0;
		}else{
			aux++;
		}
	}
	if(!aux){
		printf("%d e triangular\n", n);
	}else{
		printf("%d nao e triangular\n", n);
	}
	return 0;
}