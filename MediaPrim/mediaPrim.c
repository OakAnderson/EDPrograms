#include <stdio.h>

/*Função principal. Recebe valores inteiros para nota e
resulta na média */
int main(void){
    int i, n;
    float med = 0.0f;

    /*Recebe a quantidade de notas */
    printf("Digite a quantidade de notas: "); scanf("%d", &n);
    for (i = 0; i < n; i++) {
        float v;
        printf("Digite a nota: "); scanf("%f", &v);
        med = med + v;
    }

    /*Calcula a média */
    med = med / n;

    /*Mostra a média na tela */
    printf("Valor da media = %.2f\n", med);
    return 0;
}