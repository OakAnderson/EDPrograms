#include <stdio.h>

/*Estrura que define como deve ser uma coordenada */
struct ponto {
    float x;
    float y;
};

/*Mostra na tela uma variável com a estrutura ponto */
void imprime (struct ponto* pp)
{
    /*pp é uma variável ponteiro que busca os valores em x e y */
    printf("O ponto fornecido foi: (%.2f, %.2f)\n", pp->x, pp->y);
}

/*Função que cria uma variável de acordo com a estrutura ponto */
void captura (struct ponto* pp)
{
    printf("Digite as coordenadas do ponto (x, y): ");

    /*pp é um ponteiro que guarda exatamente em x e y */
    scanf("%f %f", &pp->x, &pp->y);
}

/*Função principal que faz uso das funções acima */
int main (void)
{
    /*p é uma variável que funciona de acordo com a estrutura ponto */
    struct ponto p;

    /*Atribui os valores à p */
    captura(&p);

    /*Mostra os valores à p */
    imprime(&p);

    return 0;
}