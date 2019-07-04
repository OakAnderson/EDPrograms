#include <stdio.h>
#include <stdlib.h>

float media(int n, float* v) {
    int i;
    float s = 0.0f;
    for (i = 0; i < n; i++)
        s += v[i];
    return s/n;    
}

float variancia (int n, float* v, float m) {
    int i;
    float s = 0.0f;
    for (i = 0; i < n; i++)
        s += (v[i] - m) * (v[i] - m);
    return s/n;
}

float max(float* v, int n){
    float max = 0.0f;
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

float min(float* v, int n){
    float min = 10.0f;
    int i;
    for (i = 0; i < n; i++){
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

int main(void) {
    int i, n;
    float *v;
    float med, var, minimo, maximo;
    printf("Digite a quantidade de notas: "); scanf("%d", &n);

    v = (float*) malloc(n*sizeof(float));
    if (v==NULL) {
        printf("Memoria insuficiente.");
        return 1;
    }

    for (i = 0; i < n; i++){
        printf("Digite a nota: ");scanf("%f", &v[i]);
    }
    med = media(n, v);
    var = variancia(n, v, med);
    minimo = min(v, n);
    maximo = max(v, n);
    printf("Media = %.2f\nVariancia = %.2f\nMinimo = %.2f\nMaximo = %.2f\n", med, var, minimo, maximo);
    free(v);
    return 0;
}