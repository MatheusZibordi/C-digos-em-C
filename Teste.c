#include <stdio.h>
int main(void) {
    int x, i, j;
    printf("%s", "Enter an integer in the range 1-20:");
    scanf("%d", &x);
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= x; j++) {
            if (j==i)
                printf("%c", '@');
            else
                printf(" ");
        }
        printf("\n");
     }
}