#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,d;
	
	printf("Digite um numero de 4 digitos: ");
	scanf("%d",&a);
	b = a % 100;
	printf("\n%d",b);
	c = a / 100;
	printf("\n%d",c);
	d = b + c;
	printf("\nB + C  = %d",d);
	d = d*d;
	printf("\n\n%d",d,"\n\n");

	if(d == a){
    	printf("\n%d",a,"\n%d",d);
	}else{
    	printf("O numero nao contem a caracteristica ");
	}
}
