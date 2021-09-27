#include<stdio.h>

struct produto{
	int cod;
	char nome[51];
	int quant;
	float preco;
};
typedef struct produto Produto;

void cria (int cod, char* nome, int quant, float preco, Produto *p){
	p->cod = cod;
	strcpy(p->nome, nome);
	p->quant = quant;
	p->preco = preco;
}

int main(void){

	int codigo, quantidade;
	float preco;
	char nomep[51];
	Produto *paux;
	Produto prod;

	printf("Digite o cod: ");
	scanf("%d",&codigo);
	printf("\nDigite o nome: ");
	scanf("%s",&nomep);
 
	printf("\nDigite a quantidade: ");
	scanf("%d",&quantidade);
	printf("\nDigite o preco: ");
	scanf("%f",&preco);
	paux=&prod;
	cria(codigo,nomep,quantidade,preco,paux);
	printf("\n\nA estrutura criada foi:");
	printf("\nCod: %d", paux->cod);
	printf("\nNome: %s", paux->nome);
	printf("\nQuant: %d", paux->quant);
	printf("\nPreco: %6.2f", paux->preco);
	getch();
}