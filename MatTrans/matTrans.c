#include <stdio.h>
#include <stdlib.h>

/*Função que pega uma matriz dinâmica e retorna a transposta */
int* transposta (int m, int n, int* mat)
{
    int i, j;
    int* trp;
    
    /*Aloca a matriz transposta */
    trp = (int*) malloc(n*m*sizeof(int));

    /*Preenche matriz */
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            trp[j*m+i] = mat[i*n+j];
    return trp;
}

int main(void)
{
    /*Declara i como linha e j como coluna.
    M e N são o tamanho das linhas e colunas respectivamente */
    int i, j, m=3, n=3;
    int *mat, *trp;

    /*Aloca a matriz na memória. Matriz por vetor simples.*/
    mat = (int*) malloc(n*m*sizeof(int));
    
    /*Cria valores para a matriz */
    for (i = 0; i < m*n; i++)
        mat[i] = (i+2) * (i+1);
    
    /*Mostra a matriz na tela */
    printf("%d %d %d\n", mat[0], mat[1], mat[2]);
    printf("%d %d %d\n", mat[3], mat[4], mat[5]);
    printf("%d %d %d\n\n", mat[6], mat[7], mat[8]);

    /*A variável da matriz transposta é alocada na
    memória e em seguida recebe o valor retornado da
    função. Matriz por vetor simples.*/
    trp = (int*) malloc(n*m*sizeof(int));
    trp = transposta(3,3, mat);
    
    /*Resolvido problema de alocação de memória.
    agora é possível mostrar a matriz transposta. */
    printf("%d %d %d\n", trp[0], trp[1], trp[2]);
    printf("%d %d %d\n", trp[3], trp[4], trp[5]);
    printf("%d %d %d\n", trp[6], trp[7], trp[8]);

    /*Desaloca toda a memória ocupada pela a matriz */
    free(mat);
    free(trp);

    return 0;
}