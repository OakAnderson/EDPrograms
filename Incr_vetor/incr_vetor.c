#include <stdio.h>

/*Função que incrementa 1 a cada elemento do vetor */
void incr_vetor (int n, int *v)
{
    int i;
    /*Percorre o vetor */
    for (i = 0; i < n; i++)
        /*incrementa um ao elemento */
        v[i]++;
}

/*Função que eleva os números de um vetor ao quadrado */
void quad_vetor(int n, int *v)
{
    int i;
    for (i = 0; i < n; i++)
        v[i] *= v[i];
}

/*Função principal */
int main(void)
{
    /*Cria um vetor de inteiros com valores já atribuidos */
    int a[] = {1,3,5};

    /*Incrementa o vetor com a função e mostra na tela */
    incr_vetor(3, a);
    printf("%d %d %d\n", a[0], a[1], a[2]);

    /*Eleva os números do vetor(já incrementados) e mostra na tela */
    quad_vetor(3, a);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    
    return 0;
}