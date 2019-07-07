#include <stdio.h>
#include <stdlib.h>

/*Função que calcula a média de um vetor */
float media(int n, float* v) {
    int i;
    
    /*Variável que soma todas as notas */
    float s = 0.0f;
    
    for (i = 0; i < n; i++)
        s += v[i];
    return s/n;    
}

/*Função que calcula a variancia das medias */
float variancia (int n, float* v, float m) {
    int i;
    float s = 0.0f;
    for (i = 0; i < n; i++)
        s += (v[i] - m) * (v[i] - m);
    return s/n;
}

/*Função que retorna a maior nota */
float max(float* v, int n){
    float max = 0.0f;
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

/*Função que retorna a menor nota */
float min(float* v, int n){
    float min = 10.0f;
    int i;
    for (i = 0; i < n; i++){
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

/*Função principal */
int main(void) {
    int i, n;
    
    /*Variável ponteiro para a Array */
    float *v;

    /*Variáveis que recebem os valores retornados das funções */
    float med, var, minimo, maximo;
    printf("Digite a quantidade de notas: "); scanf("%d", &n);

    /*Aloca o espaço necessário na memória */
    v = (float*) malloc(n*sizeof(float));

    /*Testa se há espaço na memória */
    if (v==NULL) {
        printf("Memoria insuficiente.");
        return 1;
    }

    /*Recebe as notas e guarda no vetor */
    for (i = 0; i < n; i++){
        printf("Digite a nota: ");scanf("%f", &v[i]);
    }

    /*Variáveis recebem os valores das funções */
    med = media(n, v);
    var = variancia(n, v, med);
    minimo = min(v, n);
    maximo = max(v, n);

    /*Mostra na tela os resultados */
    printf("Media = %.2f\nVariancia = %.2f\nMinimo = %.2f\nMaximo = %.2f\n", med, var, minimo, maximo);

    /*Libera o espaço alocado */
    free(v);

    return 0;
}