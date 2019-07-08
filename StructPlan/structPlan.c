#include <stdio.h>

/*Cria uma strutura para uma coordenada no plano cartesiano */
struct ponto {
    /*Ela tem um ponto x e um ponto y */
    float x;
    float y;
};

/*Função principal que faz uso da estrutura ponto */
int main(void)
{
    /*Declara a variável p como uma estrutura de plano cartesiano */
    struct ponto p;

    /*Solicita a coordenada para o usuário */
    printf("Insira a coordenada(x, y): ");
    scanf("%f %f", &p.x, &p.y);

    /*Mostra na tela */
    printf("O ponto fornecido foi: (%.2f, %.2f)\n", p.x, p.y);

    return 0;
}