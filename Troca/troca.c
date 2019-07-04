#include <stdio.h>

/*Função que troca os valores das variáveis */
int troca(int *px, int *py){
    /*Declara a variável auxiliar */
    int temp;

    temp = *px; /*temp recebe conteúdo de px*/
    *px = *py; /*conteúdo de px recebe conteúdo de py */
    *py = temp; /*conteúdo de py recebe temp */
}

int main (void) {
    /*Declara a e b com os valores 5 e 7 respectivamente */
    int a = 5, b = 7;
    printf("a = %d\nb = %d\n", a,b);
    /*Com a função, troca o conteúdo que está em a e b */
    troca(&a,&b);
    /*Mostra na tela a = 7\nb = 5 */
    printf("a = %d\nb = %d\n", a,b);
    return 0;
}