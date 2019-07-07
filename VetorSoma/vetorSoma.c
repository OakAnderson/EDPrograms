#include <stdio.h>
#include <stdlib.h>

/*Função que multiplica dois vetores*/
int* prod_vetorial(int* u, int* v, int* p) 
{
    p[0] = u[1]*v[2] - v[1]*u[2];
    p[1] = u[2]*v[0] - v[2]*u[0];
    p[2] = u[0]*v[1] - v[0]*u[1];
}

/*Função principal */
int main(void)
{
    /*Cria três vetores, onde u e v tem valores pré definidos */
    int v[] = {1,3,5}, u[] = {2,4,6}, p[3];

    /*Mostra os elementos de v na tela */
    printf("%d %d %d\n", v[0], v[1], v[2]);

    /*Mostra os elementos de u na tela */
    printf("%d %d %d\n", u[0], u[1], u[2]);

    /*Chama a função para multiplicar */
    prod_vetorial(u,v,p);

    /*Mostra o vetor p na tela */
    printf("%d %d %d\n", p[0], p[1], p[2]);
}