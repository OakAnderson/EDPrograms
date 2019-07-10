#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct alunos
{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
};
typedef struct alunos Aluno;

Aluno* tab[MAX];

void inicializa (int n, Aluno** tab)
{
    int i;
    for (i = 0; i < n; i++)
        tab[i] = NULL;
}

void preenche (int n, Aluno** tab, int i)
{
    if (i < 0 || i > n) {
        printf("Índice fora do vetor\n");
        exit(1);        /*Aborta o programa */
    }

    if (tab[i] == NULL)
        tab[i] = (Aluno*) malloc (sizeof(Aluno));
    
    printf("\n");
    printf("Digite a matrícula: ");
    scanf("%d", &tab[i]->mat);
    printf("Digite o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Digite o endereço: ");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Digite o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
}

void retira (int n, Aluno** tab, int i)
{
    if (i < 0 || i > n) {
        printf("Índice fora do limite do vetor\n");
        exit(1);    /*Aborta o programa */
    }

    if (tab[i] != NULL) {
        free(tab[i]);
        tab[i] = NULL;  /*Indica que não existe mais dados na posição */
    }
}

void imprime (int n, Aluno** tab, int i)
{
    if (i < 0 || i > n){
        printf("Índice fora do limite do vetor\n");
        exit(1);    /*Aborta o programa */
    }

    if (tab[i] != NULL) {
        printf("\n");
        printf("Matrícula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
}

void imprime_tudo (int n, Aluno** tab)
{
    int i;
    for (i = 0; i < n; i++)
        imprime(n, tab, i);
}

int main (void)
{
    Aluno* tab[10];
    inicializa(10, tab);
    preenche(10, tab, 0);
    preenche(10, tab, 1);
    preenche(10, tab, 2);
    imprime_tudo(10, tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);
    return 0;
}