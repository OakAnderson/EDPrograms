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
    /*Declara a i como linha e j como coluna.
    M e N são o tamanho das linhas e colunas respectivamente */
    int i, j, m=3, n=3;
    int **mat, **trp;

    /*Aloca a matriz na memória */
    mat = (int**) malloc(m*sizeof(int*));
    for (i = 0; i < m; i++)
        mat[i] = (int*) malloc(n*sizeof(int));
    
    /*Cria valores para a matriz */
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            mat[i][j] = (j+2) * (i+1);
    
    /*Mostra a matriz na tela */
    printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
    printf("%d %d %d\n", mat[1][0], mat[1][1], mat[1][2]);
    printf("%d %d %d\n\n\n", mat[2][0], mat[2][1], mat[2][2]);

    /*Primeiro é preciso alocar o espaço da matriz
    transposta na memória, em seguida ela recebe
    o retorno da função */
    trp = (int**) malloc(m*n*sizeof(int*));
    *trp = transposta(3,3, *mat);
    
    /*Não é possível mostrar a matriz transposta */
    printf("%d %d %d\n", trp[0][0], trp[0][1], trp[0][2]);
    //printf("%d %d %d\n", trp[1][0], trp[1][1], trp[1][2]);
    //printf("%d %d %d\n\n\n", trp[2][0], trp[2][1], trp[2][2]);

    /*Desaloca toda a memória ocupada pela a matriz */
    for (i = 0; i < m; i++)
        free(mat[i]);
    free(mat);
    for (i = 0; i < m; i++)
        free(trp[i]);
    free(trp);

    return 0;
}