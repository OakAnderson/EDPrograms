#include <stdio.h>
#include <string.h>

/* Função que inverte uma string e mostra na tela */ 
void inverte (char* str)
{
    int i;

    /*Percorre a string da última letra até a primeira.
    i começa com o tamanho da string e vai decrementando */
    for (i = strlen(str); i >= 0; --i)
        /*Mostra caractere por caractere na tela */
        printf("%c", str[i]);
    printf("\n");
}

/*Função que inverte a string de forma recursiva */
void invert_rec (char* str)
{
    /*Se não for o último elemento ele vai chamar
    esta função. Quando for o último elemento, aqui
    é executado a próxima linha até a primeira chamada */
    if (str[0] != '\0'){
        invert_rec(&str[1]);
        printf("%c", str[0]);
    }
}

/*Função principal */
int main(void)
{
    /*Cria uma variável 
    com a frase:  */
    char a[] = "subi no onibus";

    /*Chama as funções */
    inverte(a);
    invert_rec(a);

    /*O print serve para pular uma linha, que não é possível na função */
    printf("\n");

    return 0;
}