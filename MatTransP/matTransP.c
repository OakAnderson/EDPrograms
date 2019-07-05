#include <stdio.h>
#include <stdlib.h>

/*Função que retorna matriz transposta de uma
matriz com vetor de ponteiros. */
int** transposta (int m, int n, int** mat)
{
    int i, j;
    int** trp;

    /*Aloca a matriz transposta: n linhas, m colunas */
    trp = (int**) malloc(n*sizeof(int*));
    for (i = 0; i < n; i++)
        trp[i] = (int*) malloc(m*sizeof(int));
    
    /*Preenche a matriz */
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            trp[j][i] = mat[i][j];

    return trp;
}

int main(void)
{
    int i, j;
    int** mat;
    int** trp;

    /*Aloca o espaço da matriz na memória */
    mat = (int**) malloc(3*sizeof(int*));
    for (i = 0; i < 3; i++)
        mat[i] = (int*) malloc(3*sizeof(int));
    
    /*Atribui valores à matriz(Fibonacci 1 - 34) */
    mat[0][0] = 1;mat[0][1] = 1;mat[0][2] = 2;
    mat[1][0] = 3;mat[1][1] = 5;mat[1][2] = 8;
    mat[2][0] = 13;mat[2][1] = 21;mat[2][2] = 34;

    /*Mostra a matriz principal na tela */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");

    /*Aloca o espaço para a matriz transposta */
    trp = (int**) malloc(3*sizeof(int*));
    for (i = 0; i < 3; i++)
        trp[i] = (int*) malloc(3*sizeof(int));

    /*trp recebe o valor da matriz transposta da
    matriz principal  */
    trp = transposta(3, 4, mat);

    /*Mostra a matriz transposta na tela */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%2d ", trp[i][j]);
        printf("\n");
    }
    printf("\n");
    
    /*Libera os espaços alocados por mat e trp */
    for (i = 0; i < 3; i++)
        free(mat[i]);
    for (i = 0; i < 3; i++)
        free(trp[i]);
    free(trp);
    free(mat);
} 