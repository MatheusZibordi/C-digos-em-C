#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    int x, y, op, soma, prod, quoe, rest;

        setlocale(LC_ALL,"Portuguese");

        printf("Digite os n�meros para calcular!\n\n");

        printf("Digite o primeiro n�mero:\n");
        scanf("%d",&x);

        printf("Digite o segundo n�mero:\n");
        scanf("%d",&y);

        quoe=x/y;
        rest=x%y;

        printf("O quociente dos elementos �:%d\n",quoe);

        printf("O resto da divisao dos elementos �:%d\n",rest);

        return 0;
}
