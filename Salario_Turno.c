#include<stdio.h>

int main(){
	
	float salario_minimo = 450;
	float h_trabalhadas, valor_h_trabalho;
	int  codigo, controle=1;
	char turno, categoria;
	string aux;
	float salario;
	
	while(controle <= 10){
		printf("Digite o codigo do funcionario: \n")
		scanf("%d",&codigo);
		
		printd("Quantidade de horas trabalhadas por mes: \n");
		scanf("%f",&h_trabalhadas);
		
		printf("Turno (M/V/N): \n");
		scant("%c",&turno);
	}
	
	while((turno != 'M') || (turno != 'V') || (turno != 'N')){
		printf("\nTurno invalido, tente novamente.\n");
		printf("Turno (M/V/N): \n");
		scant("%c",&turno);
		
		if((turno != 'M') || (turno != 'V') || (turno != 'N'))
			break;
	}
	
	printf("Digite a Categoria (O/P):");
	scanf("%c",&categoria);
	
	while((categoria != 'O') || (categoria != 'P')){
		printf("Categoria invalida, tente novamente");
		printf("Digite a Categoria (O/P):");
		scanf("%c",&categoria);
		
		if((categoria != 'O') || (categoria != 'P'))
			break;
	}
	
	printf("Digite o Valor da hora de trabalho: ");
	scanf("%f",&valor_h_trabalho);
	
	salario = salario_minimo + (valor_h_trabalho * h_trabalhadas);
	printf("O Salario do funcionario e de %2.f",salario);
	
	pritf("O Salario inicial é de : %2.f",salario);
	
	if(salario <300){
		printf("O valor do auxilio alimentacao e de : %f",(salario%20));
	}else{
		if(salario > 300 || salario < 600){
			printf("O valor do auxilio alimentacao e de : %f",(salario%15));	
		}else{
			if(salario >600){
				printf("O valor do auxilio alimentacao e de : %f",(salario%5));
			}
		}
	}
}