#include <stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2, num3,aux;

    printf("digite o primeiro numero:	");
    scanf("%d",&num1);
    printf("digite o segundo numero:	");
    scanf("%d",&num2);
    printf("digite o terceiro numero:	");
    scanf("%d",&num3);

    if(num1>num2){ 
		aux=num1; 
		num1=num2; 
		num2=aux; 
	} 
	if(num1>num3){ 
		aux=num1; 
		num1=num3; 
		num3=aux; 
	} 
	if(num2>num3){ 
		aux=num2; 
		num2=num3; 
		num3=aux; 
	} 

	printf("\n%d\n%d\n%d",num1,num2,num3); 
}