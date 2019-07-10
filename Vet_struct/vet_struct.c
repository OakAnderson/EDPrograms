#include <stdio.h>
#include <math.h>

/*Cria uma estrutura para ponto e define ela com Ponto */
typedef struct ponto{
    float x;
    float y;
} Ponto;

/*Função que retorna o ponto que representa o centro geométrico */
Ponto centro_geom (int n, Ponto* v)
{
    int i;
    Ponto p = {0.0f, 0.0f};     /*Declara e inicializa ponto */
    for (i = 0; i < n; i++){
        p.x += v[i].x;
        p.y += v[i].y;
    }
    p.x /= n;
    p.y /= n;

    return p;
}

/*Função que calcula a área de um polígono */
float area (int n, Ponto* p)
{
    int i, j;
    float a = 0;
    for (i = 0; i < n; i++){
        j = (i + 1) % n;        /*Próximo índice (incremento circular) */
        a += (p[j].x-p[i].x)*(p[i].y + p[j].y)/2; /*a = (xi+1 - xi)(yi+1 + yi)/2 */
    }

    return fabs(a);
}

/*Função para inserir os pontos do polígono */
void insere (Ponto* p, int n)       /*É usado o ponteiro para guardar os valores no vetor */
{
    int i;
    for (i = 0; i < n; i++){
        printf("Digite a coordenada (x, y): ");
        scanf("%f %f", &p[i].x, &p[i].y);
    }
}

/*Função principal */
int main(void)
{
    Ponto p[3];

    /*Chama a função para inserir os valores */
    insere(p, 3);

    /*Mostra o resultado da área */
    printf("area = %.2f\n", area (3, p));
    return 0;
}