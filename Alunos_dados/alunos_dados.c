#include <stdio.h>
#include <stdlib.h>

/*Define MAX como 100 */
#define MAX 100

/*Cria uma estrutura para aluno */
struct alunos
{
    int mat;        /*Matrícula recebe um inteiro */
    char nome[81];  /*Nome do aluno(80 caracteres no máximo) */
    char end[121];  /*Endereço do aluno (120 caracteres no máximo) */
    char tel[21];   /*Telefone do aluno (20 caracteres no máximo) */
};
typedef struct alunos Aluno;    /*Define a estrutura alunos como só Aluno */

Aluno* tab[MAX];    /*Cria um vetor de ponteiros que apontam para estruturas de Aluno */

/*Função que preenche as posições do ponteiro com NULL (nulo) */
void inicializa (int n, Aluno** tab)
{
    int i;
    for (i = 0; i < n; i++)     /*Para os valores apontados no vetor, atribua NULL */
        tab[i] = NULL;
}

/*Função que solicita ao usuário que o mesmo insira os dados de cada aluno */
void preenche (int n, Aluno** tab, int i)
{
    if (i < 0 || i > n) {                   /*Testa se o número passado como parâmetro é válido */
        printf("Índice fora do vetor\n");
        exit(1);        /*Aborta o programa */
    }

    if (tab[i] == NULL)     /*Se for válido, testa se ele é um campo vazio */
        tab[i] = (Aluno*) malloc (sizeof(Aluno));       /*Aloca o espaço na memória */
    
    printf("\n");
    printf("Digite a matrícula: ");
    scanf("%d", &tab[i]->mat);      /*Solicita a matrícula para o usuário e guarda em mat  */
    printf("Digite o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);   /*Solicita o nome */
    printf("Digite o endereço: ");
    scanf(" %120[^\n]", tab[i]->end);   /*Solicita o endereço */
    printf("Digite o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);    /*Solicita o telefone */
}

/*Função que limpa os espaços alocados */
void retira (int n, Aluno** tab, int i)
{
    if (i < 0 || i > n) {       /*Testa se i é válido */
        printf("Índice fora do limite do vetor\n");
        exit(1);    /*Aborta o programa */
    }

    if (tab[i] != NULL) {       /*Testa se a posição é válida para eliminar */
        free(tab[i]);           /*Limpa o espaço alocado */
        tab[i] = NULL;  /*Indica que não existe mais dados na posição */
    }
}

/*Mostra na tela um aluno em idividual */
void imprime (int n, Aluno** tab, int i)
{
    if (i < 0 || i > n){        /*Testa se i é válido */
        printf("Índice fora do limite do vetor\n");
        exit(1);    /*Aborta o programa */
    }

    if (tab[i] != NULL) {       /*Se for um campo válido... */
        printf("\n");
        printf("Matrícula: %d\n", tab[i]->mat); /*Mostra a matrícula */
        printf("Nome: %s\n", tab[i]->nome);     /*Mostra o nome */
        printf("Endereço: %s\n", tab[i]->end);  /*Mostra o endereço */
        printf("Telefone: %s\n", tab[i]->tel);  /*Mostra o telefone */
    }
}

/*Imprime na tela todos os alunos 'cadastrados' */
void imprime_tudo (int n, Aluno** tab)
{
    int i;
    for (i = 0; i < n; i++)     /*Para todos os valores no vetor... */
        imprime(n, tab, i);     /*Imprima o usuário */
}

/*Função principal */
int main (void)
{
    Aluno* tab[10];         /*Cria um vetor de ponteiros para estruturas Aluno */
    inicializa(10, tab);    /*Inicializa os espaços para os ponteiros */

    /*Utiliza a função preenche para cadastrar os alunos */
    preenche(10, tab, 0);
    preenche(10, tab, 1);
    preenche(10, tab, 2);

    /*Mostra todos os alunos cadastrados na tela */
    imprime_tudo(10, tab);

    /*Limpa os espaços alocados */
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);
    
    return 0;
}