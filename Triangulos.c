#include <stdio.h>
#include <stdlib.h>

int main () {

   int a, b, c;

        printf("Verificador de tipo de triangulo.\n");

        printf("Entre com a medida do lado 1 do triangulo:\n ");
        scanf("%d",&a);

        printf("Entre com a medida do lado 2 do triangulo:\n ");
        scanf("%d",&b);

        printf("Entre com a medida do lado 3 do triangulo:\n ");
        scanf("%d",&c);

    if (a<=0 || b<=0 || c<=0){
      printf("Lados nulos ou negativos nao sao aceitos.");
    }

    if (a>=b+c || b>=c+a || c>=a+b) {
      printf("Triangulo não existe.");
    }

   if (a==b && b==c)
      printf("Triangulo equilatero.");

   else if (a==b || b==c || c==a)
      printf("Triangulo isosceles.");

   else
      printf("Triangulo escaleno.");


   return 0;

}
