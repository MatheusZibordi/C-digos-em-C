#include <stdlib.h>

int main(){
	int i, x[10], maior=0;
	for(i=0; i<10; i++){
		printf("Informa %d numeros : ", i+1);
		scanf("%d", &x[i]);
		if(x[i] > maior){
			maior = x[i];
		}
	}
    for(i=0; i<10; i++){
    	printf("O %d numero informado foi : %d\n", i+1, x[i]);
	}
	printf("O maior numero informado foi : %d\n", maior);
	system("pause");
}
