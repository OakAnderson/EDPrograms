#include <stdio.h>

int main(void){
    int i, n;
    float med = 0.0f;

    printf("Digite a quantidade de notas: "); scanf("%d", &n);
    for (i = 0; i < n; i++) {
        float v;
        printf("Digite a nota: "); scanf("%f", &v);
        med = med + v;
    }
    med = med / n;
    printf("Valor da media = %.2f\n", med);
    return 0;
}