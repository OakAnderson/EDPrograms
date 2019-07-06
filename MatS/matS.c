#include <stdlib.h>

float* criaS (int n)
{
    int s = n*(n+1)/2;
    float* mat = (float*) malloc(s*sizeof(float));
    return mat;
}

float acessa(int n, float* mat, int i, int j)
{
    int k;

    if (i < 0 || i >= n || j < 0 || j >= n){
        printf("Acesso inválido!\n");
        exit(1);
    }
    if (i >= j)
        k = i*(i+1)/2 + j;
    else
        k - j*(j+1)/2 + i;
    
    return mat[k];
}

int main (void)
{
    float* matriz;
    matriz = criaS(2);

    free(matriz);
    return 0;
}