#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    int x, y, op, soma, prod, quoe;

        setlocale(LC_ALL,"Portuguese");

        printf("Digite os n�meros para calcular!\n\n");

        printf("Digite o primeiro n�mero:\n");
        scanf("%d",&x);

        printf("Digite o segundo n�mero:\n");
        scanf("%d",&y);

        system("cls");

        printf("O que voce quer calcular?\n\n");
        printf("1 - Soma\n");
        printf("2 - Produto\n");
        printf("3 - Quociente\n");
        scanf ("%d",&op);

        soma=x+y;
        prod=x*y;
        quoe=x/y;

        switch (op){

            case 1 :
                printf("A soma dos elementos �:%d\n",soma);
            break;

            case 2 :
                printf("O produto dos elementos �:%d\n",prod);
            break;

            case 3 :
                printf("O quociente dos elementos �:%d\n",quoe);
            break;

        return 0;
    }
}
