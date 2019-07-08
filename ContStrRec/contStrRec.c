#include <stdio.h>

/*Função recursiva para contar a quantidade de letras de uma string */
int comp_rec (char* str)
{
    /*Variável que vai guardar os valores */
    int c = 0;

    /*Se não for o último elemento... */
    if (str[0] != '\0'){
        /*Então c recebe 1 + o resultado da função  */
        c += 1 + comp_rec(&str[1]);
    }
    /*Retorna o somatório */
    return c;
}

/*Função recursiva(forma do livro) */
int comprimento_rec (char* str)
{
    /*Se o caractere atual for o último... */
    if (str[0] == '\0')
        /*Então retorne 0 */
        return 0;
    /*senão */
    else
        /*retorne 1 + o comprimento dos próximos caracteres */
        return 1 + comprimento_rec(&str[1]);
}

/*Função principal */
int main(void)
{
    /*Cria uma variável para guardar a string */
    char a[81];

    /*Recebe como entrada o teclado e guarda na variável a o que a pessoa digitou */
    printf("Digite a frase: "); scanf(" %80[^\n]", a);

    /*Mostra na tela os caracteres com a função do livro */
    printf("A frase \"%s\" tem %d caracteres\n", a, comprimento_rec(a));
    /*Mostra na tela os caracteres com a função testada */
    printf("A frase \"%s\" tem %d caracteres\n", a, comp_rec(a));
        
    return 0;
}