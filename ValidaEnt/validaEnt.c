#include <stdio.h>

/*Função que valida se a cadeia de caracteres tem somente letras (ASCII) */
int valida_str(char* str)
{  
    /*#i é um contador.
    #cont serve para contar se foi  encontrado
    um caractere inválido na frase. */
    int i, cont = 0;

    /*O comando for percorre a string para
    encontrar os valores inválidos  */
    for (i = 0; str[i] != '\0'; i++){
        /*A cara volta pelo for, o if testa se o caractere é uma letra
        ou espaço(De acordo com a tabela ASCII) */
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' ')))
            cont ++;
    }

    /*Se foi encontrado algo que não seja letra, será retornado 1
    senão, retorna 0. */
    if (cont > 0)
        return 0;
    else
        return 1;
}

int main(void)
{
    /*Cria um vetor que guarda caracteres */
    char entrada[81];

    /*Captura a entrada do teclado. 
    %80[^\n] serve para limitar a entrada e determinar o final
    da string quando o usuário digitar Enter */
    printf("Digite uma frase: "); scanf(" %80[^\n]", entrada);

    /*Pega o valor de retorno da função e mostra na tela
    se há somente letras ou não. */
    if (valida_str(entrada))
        printf("Há somente letras.\n");
    else
    {
        printf("Há caractere invalido.\n");
    }
    
}