#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Define a estrutura ponto, que usa float de x e y, para 'Ponto' */
typedef struct ponto{
    float x;
    float y;
} Ponto;

/*Estrutura de um círculo */
struct circulo {
    Ponto p;        /*Centro do círculo */
    float r;        /*Raio do círculo */
};

typedef struct circulo Circulo; /*struct circulo agora é só Circulo */

/*Função que calcula a distância de dois pontos no plano cartesiano */
float distancia (Ponto* p, Ponto* q)
{
    /*√(x1 - x2)² + (y1 - y2)² */
    float d = sqrt((q->x - p->x)*(q->x - p->x) + (q->y - p->y)*(q->y - p->y));

    /*Retorna a distância */
    return d;
}

/*Função que verifica se o ponto está dentro do círculo */
int interior (Circulo* c, Ponto* p)
{
    float d = distancia(&c->p, p);      /*d recebe a distância do ponto do circulo para a borda */
    return (d < c->r);                  /*retorna verdadeiro se a distância for menor que o raio */
}

/*Função principal para testar se o que o usuário digitou
é um ponto dentro do círculo determinado */
int main(void)
{
    /*a é um circulo */
    Circulo* a;

    /*o é um ponto */
    Ponto o;

    /*aux auxilia para a validação da entrada */
    int aux;

    /*Aloca o espaço necessário para a na memória */
    a = (Circulo*) malloc (sizeof(Circulo));

    /*Atribui os valores para o círculo a */
    a->p.x = 12.6;      /*o centro de a tem coordenada x = 12.6*/
    a->p.y = 6.43;      /*o centro de a tem coordenada y = 6.43 */
    a->r = 5;           /*o raio   de a tem tamanho = 5*/

    /*Mostra na tela o que será solicitado */
    printf("Para o circulo a seguir, digite um ponto para saber se está ou não dentro do círculo\n");

    /*Solicita o usuário para que ele insira dois números para a coordenada */
    printf("Centro: (%.1f, %.1f)\nRaio: %.1f\n", a->p.x, a->p.y, a->r);
    
    /*Solicite uma nova coordenada enquanto a inserida não estiver dentro do círculo */
    do {
        printf("Digite as coordenadas(x, y): ");
        scanf("%f %f", &o.x, &o.y);             /*Recebe a entrada do usuário */
        aux = interior(a, &o);                  /*aux recebe o resultado que indica se está ou não dentro do círculo */
        if (aux)
            printf("Este ponto está dentro do círculo.\n");
        else
            printf("Tente novamente.\n");
    } while (!aux);

    /*Libera o espaço alocado para a */
    free(a);

    return 0;
}
