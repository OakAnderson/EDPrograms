#include <stdio.h>

/*Função que cria cópia de uma string com recursividade */
void copia_rec (char* dest, char* orig)
{
    /*Se for o último elemento... */
    if (orig[0] == '\0')
        /*Então a variável destino recebe o caractere nulo */
        dest[0] = '\0';
    /*Senão... */
    else{
        /*A variável recebe o caractere em questão e puxa a função para o próximo caractere */
        dest[0] = orig[0];
        copia_rec(&dest[1], &orig[1]);
    }
}

/*Mesma função, porém mais compacta */
void cpy_rec (char* dest, char* orig)
{
    /*A variável destino recebe o elemento em questão */
    dest[0] = orig[0];

    /*Se o elemento atual não foi o último... */
    if (orig[0] != '\0')
        /*A função é chamada para o próximo elemento */
        cpy_rec(&dest[1], &orig[1]);
}

int main (void)
{
    /*Cria uma variável com a frase e duas variáveis destino */
    char a[] = "tem 13 letras";
    char b[14];
    char c[14];

    /*Primeira função */
    copia_rec(b, a);
    printf("Primeira função: %s\n", b);

    /*Segunda função */
    cpy_rec(c, a);
    printf("Segunda função: %s\n", c);

    return 0;
}