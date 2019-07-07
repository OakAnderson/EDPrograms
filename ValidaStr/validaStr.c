#include <stdio.h>

/*Função que valida se o caractere é uma letra  */
int valida_char(char str)
{
    /*Se o caractere tiver codificação ASCII entre a codificação de 
    'a' e de 'z' ou de 'A' e de 'Z' ela retorna verdadeiro*/
    if (((str >= 'a') && (str<= 'z')) || (str >= 'A') && (str <= 'Z'))
        return 1;
    else
        return 0;
}

/*Função que verifica se o caractere é uma número */
int valida_dig(char str)
{
    /*Se o código do caractere estiver entre o código de '0' e de '9' 
    ela retorna verdadeiro*/
    if ((str >= '0') && (str <= '9'))
        return 1;
    else
        return 0;
}

/*Função que mostra na tela "True" or "False" de acordo com o retorno
da função */
int logic(int a)
{
    if (a == 1)
        printf("True\n");
    else
        printf("False\n");
}

/*Função principal */
int main(void)
{   
    /*Declara C como tipo caractere */
    char c;
    int v;

    /*Recebe um caractere como entrada do teclado
    -- a variável c guarda somente o primeiro digito 
    caso não seja espaço */
    printf("Digite um caractere: "); scanf(" %c", &c);
    
    /*Validando como letra o que a pessoa digitou */
    printf("Validando letra...\n");
    v = valida_char(c);
    logic(v);

    /*Validando como número o que a pessoa digitou */
    printf("Validando digito...\n");
    v = valida_dig(c);
    logic(v);

    return 0;    
}