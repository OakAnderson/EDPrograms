#include <stdio.h>
/*Utilizando recursividade para calcular fatorial */
int fat(int n){
    /*Se n for igual a 0, o valor retornado é 1 */
    if (n == 0){
        //printf("%d\n", n);
        return 1;
    }
    /*Caso o valor inserido seja válido, será retornado n x (n-1)! */
    else if (n < 0) {
        printf("Valores negativos não tem Fatorial!");
        return 0;
    }
    else{
        //printf("%d * %d\n", n, n-1);
        return n*fat(n-1);
    }
}

void main() {
    int a;
    printf("A: "); scanf("%d", &a);
    printf("%d\n", fat(a));
}