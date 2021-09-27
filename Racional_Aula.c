#include <stdio.h>
#include <stdlib.h>

struct numeros_racionais {
	int numerador;
	int denominador;
};

typedef struct numeros_racionais nr;

nr criar_nr(int n1, int n2){
	nr numero_nr;
	if (n2!=0){
	   numero_nr.numerador=n1;
	   numero_nr.denominador=n2;
        } else {
           printf("nao eh valido\n");
	   exit(0);
	}
	return numero_nr;
}

nr multi(nr n1, nr n2){
   nr resposta;
   resposta.numerador=n1.numerador*n2.numerador;
   resposta.denominador=n1.denominador*n2.denominador;
   return resposta;
}

nr soma(nr* n1, nr* n2){
	nr resposta;
	int x1 = n1->numerador;
	int y1 = n1->denominador;
	int x2 = n2->numerador;
	int y2 = n2->denominador;

	resposta.numerador = x1*y2 + x2*y1;
	resposta.denominador = y1*y2;
	
	return resposta;
}

nr subtracao(nr* n1, nr* n2){
	nr resposta;
	int x1 = n1->numerador;
	int y1 = n1->denominador;
	int x2 = n2->numerador;
	int y2 = n2->denominador;

	resposta.numerador = x1*y2 - x2*y1;
	resposta.denominador = y1*y2;
	
	return resposta;
}

void divisao(nr n1, nr n2, nr* resposta){
     int x1 = n1.numerador;
     int y1 = n1.denominador;
     int x2 = n2.numerador;
     int y2 = n2.denominador;
     resposta->numerador = x1*y2;
     resposta->denominador = x2*y1;	     
}


void imprimir(nr numero){
	printf("%d/%d\n", numero.numerador, numero.denominador);
}


int main(void){
	nr n1, n2, r;
	n1=criar_nr(1,2);
	n2=criar_nr(2,3);
        divisao(n1,n2,&r);
	imprimir(r);
}
