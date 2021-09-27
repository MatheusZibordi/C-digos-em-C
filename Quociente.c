#include<stdio.h>
#include<conio.h>

int main(){
	
	float x,y;
	
	printf("Digite um numero:	");
	scanf("%f",&x);
	printf("\nDigite outro numero:	");
	scanf("%f",&y);
	
	if(y != 0){
		printf("\n\n O Quociente: %f",x/y);
	}else{
		printf("\n Divisao Por Zero \N");
	}
	
}