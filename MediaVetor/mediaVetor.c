#include <stdio.h>

int main(void) {
    float v[10]; /*Declaração do vetor para armazenar 10 notas */
    float med, var;
    int i;
    /*Rececbe as notas */
    for (i = 0; i < 10; i++){
        printf("Digite a nota: ");scanf("%f", &v[i]);
    }

    /*Calcula a média */
    med = 0.0f;
    for (i = 0; i < 10; i++)
        med = med + v[i];
    med = med / 10;

    /*Calcula a variância */
    for (i = 0; i < 10; i++)
        var = var + (v[i]-med)*(v[i]-med);
    var = var / 10;

    /*Exibe o resultado */
    printf("Media = %.2f\nVariancia = %.2f\n", med, var); 
    return 0;
}