#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
char* alunos[MAX];

/*Função que duplica uma string */
char* duplica (char* s)
{
    /*n é igual ao tamanho da string */
    int n = strlen(s);
    
    /*Aloca espaço na memória para guardar a cópia */
    char* d = (char*) malloc ((n+1)*sizeof(char));
    
    /*Faz a cópia com o uso da biblioteca <stdlib.h> */
    strcpy(d,s);
    
    /*retorna a cópia */
    return d;
}

/*Função que recebe as linhas escritas pelo usuário */
char* lelinha (void)
{
    /*Variável auxiliar para ler linha */
    char linha[121];

    printf("Digite um nome: ");
    scanf(" %120[^\n]", linha);

    return duplica(linha);    
}

/*FUnção para capturar e guardar os nomes dos alunos */
int lenomes (char** alunos)
{
    /*Variáveis para contagem e guardar a quantidade de alunos */
    int i, n;
    /*Enquanto a pessoa não digitar um valor válido, será solicitado novamente */
    do {
        printf("Digite o número de alunos: ");
        scanf("%d", &n);
    } while (n > MAX || n < 0);

    /*De acordo com o valor inserido, a pessoa vai colocar o nome de cada aluno */
    for (i = 0; i < n; i++)
        alunos[i] = lelinha();

    return n;
}

/*Função para liberar os nomes alocados na tabela */
void liberanomes (int n, char** alunos)
{
    int i;
    /*Percorre todos os elementos para liberar */
    for(i = 0; i < n; i++)
        free(alunos[i]);
}

/*Função que imprime o nome dos alunos na tela */
void imprimenomes (int n, char** alunos)
{
    int i;
    /*Percorrer os elementos do vetor e mostra na tela */
    for (i = 0; i < n; i++)
        printf("%s\n", alunos[i]);
}

/*Função principal que faz uso de todas as funções anteriores */
int main (void)
{  
    /*Vetor que guarda cadeias de caracteres */
    char* alunos[MAX];

    /*n recebe a quantidade de alunos */
    int n = lenomes(alunos);

    /*Mostra os alunos na tela */
    imprimenomes(n, alunos);

    /*Libera a memória alocada */
    liberanomes(n, alunos);

    return 0;
}