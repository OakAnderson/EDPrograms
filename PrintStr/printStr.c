#include <stdio.h>

/*Função que mostra uma string na tela com o pulo de linha inserido*/
void print (char* s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}

/*Função equivalente a função anterior */
void imprime (char* s)
{
    printf("%s\n", s);
}

/*Função que conta a quantidade de caracteres da string */
int len(char* s)
{
    int i, n = 0;
    for (i = 0; s[i] != '\0'; i++)
        n++;
    return n;
}

/*Função que copia uma string. */
void copia (char* dest, char* orig)
{
    int i; 
    for (i = 0; orig[i]; i++)
        dest[i] = orig[i];
    
    /*Fecha a string copiada */
    dest[i] = '\0';
}

int main (void)
{
    /*Cria uma string. Obrigatório o uso dos colchetes */
    char frase[] = "Todo dia isso bixo";
    
    /*A variável a recebe a quantidade de caracteres que há na frase */
    int a = len(frase);

    /*Cria uma cadeia de caracteres com a mesma quantidade de espaços da anterior */
    char resultado[a];

    /*Copia o conteúdo da variável frase na variável resultado */
    copia(resultado, frase);

    /*Mostra a frase na tela */
    print(frase);

    /*Mostra o resultado na tela */
    print(resultado);

    /*Mostra na tela */
    printf("A string \"%s\" tem %d caracteres\n", frase, a);

    return 0;
}