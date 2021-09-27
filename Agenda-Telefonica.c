/*Aluno. Matheus Rocha Medeiros Zibordi. RA a1999079*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Agenda{
	char cpf[20];
	char nome[50];
	char email[50];
	char observacao[50];
	struct Agenda *prox;   
	struct Tel *t;
	struct Endereco *end;
	struct Niver *ni;

};
struct Tel{
	char ddd[5];
	char telefone[10];
	struct Tel *prox;
};
struct Endereco{
	char rua[50];
	char numero[10];
	char complemento[10];
	char bairro[20];
	char cep[10];
	char cidade[20];
	char estado[20];
	char pais[20];
	struct Endereco *prox;
};
struct Niver{
	char dia[5];
	char mes[5];
	char ano[5];
	struct Niver *prox;
	struct Agenda *age;
	struct Tel *t;
	struct Endereco *end;
	struct Niver *ni;
};

struct Agenda* criarAgenda(){
	return NULL;
}
struct Tel* criarTel(){
	return NULL;
}
struct Endereco* criarEndereco(){
	return NULL;
}
struct Niver* criarNiver(){
	return NULL;
}

void inserirTel(struct Tel **t,char telefone[],char ddd[]){
	struct Tel *p;
	p=(struct Tel*)malloc(sizeof(struct Tel));
	strcpy(p->ddd,ddd);
	strcpy(p->telefone,telefone);
	p->prox=*t;
	*t=p;
}
void inserirEndereco(struct Endereco **end,char rua[],char numero[],char complemento[],char bairro[],char cep[],char cidade[],char estado[],char pais[]){
	struct Endereco *p;
	p=(struct Endereco*)malloc(sizeof(struct Endereco));
	strcpy(p->rua,rua);
	strcpy(p->numero,numero);
	strcpy(p->complemento,complemento);
	strcpy(p->bairro,bairro);
	strcpy(p->cep,cep);
	strcpy(p->cidade,cidade);
	strcpy(p->estado,estado);
	strcpy(p->pais,pais);
	p->prox=*end;
	*end=p;
}
void inserirNiver(struct Niver **ni,char dia[],char mes[],char ano[] ){
	struct Niver *p;
	p=(struct Niver*)malloc(sizeof(struct Niver));
	strcpy(p->dia,dia);
	strcpy(p->mes,mes);
	strcpy(p->ano,ano);
	p->prox=*ni;
	*ni=p;
}
void inserirPessoa(struct Agenda **age, struct Tel *T,struct Endereco *End, struct Niver *Ni,char n[], char o[], char c[], char e[]){
	struct Agenda *p;
	p=(struct Agenda*)malloc(sizeof(struct Agenda));
	strcpy(p->cpf,c); 
	strcpy(p->nome,n);
	strcpy(p->email,e); 
	strcpy(p->observacao,o);
	p->prox=*age;
    p->t=T;
    p->end=End;
    p->ni=Ni;
	*age=p;
}

struct Agenda* localizar(struct Agenda *age, char c[]){
	struct Agenda *p;
	struct Tel *auxt;
	p=age;
	auxt=p->t;
	while(p!=NULL){
		if(strcmp(p->cpf,c)!=0)
			p=p->prox;
		else{
			printf("\n CPF: %s",p->cpf);
			printf("\n Nome: %s",p->nome);
			printf("\n E-Mail: %s",p->email);
			printf("\n Observacao: %s",p->observacao);
			while(auxt!=NULL){
				printf("\n DDD: %s Telefone: %s",auxt->ddd,auxt->telefone);
				auxt =auxt->prox;
			}
			return p;
		}
	}
	return NULL;
}
struct Niver* pesquisar(struct Niver *ni, char m[]){
	struct Niver *p;
	struct Tel *auxt;
	struct Agenda *auxage;
	p=ni;
	auxt =p->t;
    auxage=p->age;
	while(p!=NULL){
		if(strcmp(p->mes,m)!=0)
			p=p->prox;
		else{
			printf("\n Mes: %s",p->mes);
			
			while(auxt!=NULL){
				printf("\n DDD: %s Telefone: %s",auxt->ddd,auxt->telefone);
				auxt =auxt->prox;
			}
            while(auxage!=NULL){
				printf("\n Nome: %s",auxage->nome);
				printf("\n E-Mail: %s",auxage->email);
				auxage=auxage->prox;
			}
			return p;
		}
	}
	return NULL;
}

void listarContatos(struct Agenda *age){
	struct Agenda *p;
	struct Tel *auxt;
	struct Endereco *auxend;
	struct Niver *auxni;
	p=age;
	auxt=p->t;
    auxend=p->end;
	auxni=p->ni; 
	while (p!=NULL){
		printf("\n CPF: %s",p->cpf);
		printf("\n Nome: -> %s",p->nome);
		printf("\n E-Mail: %s",p->email);
		printf("\n Observacao: -> %s",p->observacao);
			while(auxt!=NULL){
				printf("\n DDD: %s Telefone: %s",auxt->telefone,auxt->ddd);
				auxt=auxt->prox;
			}
			while(auxend!=NULL){
				printf("\n Rua: %s Numero: %s",auxend->rua,auxend->numero);
				printf("\n Complemento: %s Bairro: %s",auxend->complemento,auxend->bairro);
				printf("\n Cep: %s Cidade: %s",auxend->cep,auxend->cidade);
				printf("\n Estado: %s Pais: %s",auxend->estado,auxend->pais);
				auxend=auxend->prox;
			}
			while(auxni!=NULL){
				printf("\n Niver: %s/%s/%s",auxni->dia,auxni->mes,auxni->ano);
				auxni=auxni->prox;
			}
		p=p->prox;
		printf("\n ======================= \n");
     }
}

void lista(struct Agenda *age,char C){
	struct Agenda *p;
	struct Tel *auxt;
	struct Endereco *auxend;
	struct Niver *auxni;
	p=age;
	auxt=p->t;
    auxend=p->end;
	auxni=p->ni; 
	while (p!=NULL){
		if(p->cpf[0]!=C)
			p=p->prox;
		else{
			printf("\n CPF: %s",p->cpf);
			printf("\n Nome: -> %s",p->nome);
			printf("\n E-Mail: %s",p->email);
			printf("\n Observacao: -> %s",p->observacao);
				while(auxt!=NULL){
					printf("\n DDD: %s Telefone: %s",auxt->ddd,auxt->telefone);
					auxt=auxt->prox;
				}

				while(auxend!=NULL){
					printf("\n Rua: %s Numero: %s",auxend->rua,auxend->numero);
					printf("\n Complemento: %s Bairro: %s",auxend->complemento,auxend->bairro);
					printf("\n Cep: %s Cidade: %s",auxend->cep,auxend->cidade);
					printf("\n Estado: %s Pais: %s",auxend->estado,auxend->pais);
					auxend=auxend->prox;
				}
				while(auxni!=NULL){
					printf("\n Niver: %s/%s/%s",auxni->dia,auxni->mes,auxni->ano);
					auxni=auxni->prox;
				}
            p=p->prox;
			printf("\n===================================\n");
			}
	}
}

struct Agenda* remover(struct Agenda *age,char c[]){
	struct Agenda *p, *q;
	p=localizar(age,c);
	if(p==NULL)
		printf("\n Nao Localizado!");
	else{
		q=age;
		if(q==p){
			age=p->prox;
			free(p);
		}else{
			while(q->prox!=p)
				q=q->prox;
				q->prox=p->prox;
				free(p);
        }
        printf("\n Contato Removido!");
	}
	return age;
}

void ApagarLista(struct Agenda *age){
	struct Agenda *p, *q;
    p=age;
	q=age;
	if(p==NULL)
		printf("\n Lista vazia");
	else{
		q=age;
		if(q==p){
			age=p->prox;
			free(p);
		}else{
        	while(q->prox!=p)
            	q=q->prox;
				q->prox=p->prox;
				free(p);
        }
        printf("\n Lista Apagada!");
    }
}

int main(void){
	struct Agenda *Lista;
	struct Tel *Tel;
	struct Endereco *End;
	struct Niver *Ni;
	int op;
	char cpf[20], nome[50], email[50], observacao[50];
	char ddd[5],telefone[20];
	char rua[50], numero[10], complemento[10], bairro[20], cep[10], cidade[20],estado[20], pais[20];
	char dia[5], mes[5], ano[5];
	
	Lista=criarAgenda();
	Tel=criarTel();
	End=criarEndereco();
	Ni=criarNiver();
	
	do{
		system("cls");
		printf("\n 1 - Cadastrar");
		printf("\n 2 - Pesquisar por CPF");
		printf("\n 3 - Pesquisar por Mes");
		printf("\n 4 - Remover");
		printf("\n 5 - Listar Contatos");
		printf("\n 6 - Apagar Lista");
		printf("\n Opcao: ");     
		fflush(stdin);
		scanf("%d",&op);	  
		
		switch(op){
			case 1: printf("\n CPF: ");
				fflush(stdin);
				scanf("%s",cpf);
				printf("\n Nome: ");
				fflush(stdin);
				scanf("%s",nome);
				printf("\n E-Mail: ");
				fflush(stdin);
				scanf("%s",email);
				printf("\n Observacao: ");
				fflush(stdin);
				scanf("%s",observacao);
				printf("\n DDD: ");
				fflush(stdin);
				scanf("%s",ddd);
				printf("\n Telefone: ");
				fflush(stdin);
				scanf("%s",telefone);
				inserirTel(&Tel, ddd, telefone);
				printf("\n Rua: ");
				fflush(stdin);
				scanf("%s",rua);
				printf("\n Numero: ");
				fflush(stdin);
				scanf("%s",numero);
				printf("\n Complemento: ");
				fflush(stdin);
				scanf("%s",complemento);
				printf("\n Bairro: ");
				fflush(stdin);
				scanf("%s",bairro);
				printf("\n Cep: ");
				fflush(stdin);
				scanf("%s",cep);
				printf("\n Cidade: ");
				fflush(stdin);
				scanf("%s",cidade);
				printf("\n Estado: ");
				fflush(stdin);
				scanf("%s",estado);
				printf("\n Pais: ");
				fflush(stdin);
				scanf("%s",pais);
				inserirEndereco(&End,rua,numero,complemento,bairro,cep,cidade,estado,pais);
				printf("\n Dia: ");
				fflush(stdin);
				scanf("%s",dia);
				printf("\n Mes: ");
				fflush(stdin);
				scanf("%s",mes);
				printf("\n Ano: ");
				fflush(stdin);
				scanf("%s",ano);
				inserirNiver(&Ni,dia,mes,ano);
				inserirPessoa(&Lista,Tel,End,Ni,cpf,nome,email,observacao);
			break;

			case 2: if(Lista==NULL)
				printf("\n Agenda vazia");
				else{
					printf("\n Digite um CPF ");
					fflush(stdin);
					scanf("%s",cpf);
						if(localizar(Lista,cpf)==NULL)
							printf("\n Nao Localizado");
					}
					getch();
			break;
			case 3: if(Lista==NULL)
				printf("\n Agenda vazia");
				else{
					printf("\n Digite um Mes ");
					fflush(stdin);
					scanf("%s",mes);
						if(localizar(Lista,mes)==NULL)
							printf("\n Nao Localizado");
					}
					getch();
			break;
			case 4: if(Lista==NULL)
				printf("\n Agenda vazia");
				else{
					printf("\n Digite o CPF para remover: ");
					scanf("%s",cpf);
					Lista=remover(Lista,cpf);
					getch();
				}
			break;
			case 5: if(Lista==NULL)
				printf("\n Agenda vazia");
				else
					listarContatos(Lista);
				getch();
			break;
			case 6: if(Lista==NULL)
				printf("\n Agenda vazia");
				else
					ApagarLista(Lista);
				getch();
			break;
			}
		}while (op!=0);
}