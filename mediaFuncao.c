#include <stdio.h>

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
    float v[10];
    float med, var, minimo, maximo;
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite a nota: "); scanf("%f", &v[i]);
    }

    med = media(10, v);
    var = variancia(10, v, med);
    minimo = min(v, 10);
    maximo = max(v, 10);
    printf("Media = %.2f\nVariancia = %.2f\nMinimo = %.2f\nMaximo = %.2f\n", med, var, minimo, maximo);
    return 0;
}