#include <stdio.h>

/*Função que concatena strings */
void concatena (char* orig, char* dest)
{
    int i = 0; /*Índice usado na cadeia destino, inicializado com zero */
    int j;     /*Índice usado na cadeia origem */
    
    /*Acha o final da cadeia destino */
    i = 0;
    while (dest[i] != '\0')
        i++;
    
    /*Copia elementos da origem para o final do destino */
    for (j = 0; orig[j] != '\0'; j++){
        dest[i] = orig [j];
        i++;
    }

    /*Fecha a cadeia de destino */
    dest[i] = '\0';
}

int main (void) 
{
    /*Cria uma cadeia de origem */
    char a[] = "kkkkkk\n";

    /*Cria uma cadeia de destino. 81 é usado para poder guardar mais caracteres */
    char b[81] = "bosonaro";

    /*Usa a função para concatenar as strings. O resultado por
    definição é guardado em b */
    concatena(a, b);

    printf("%s", b);
}