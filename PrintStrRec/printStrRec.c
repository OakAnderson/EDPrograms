#include <stdio.h>

/*Função que */
void imprime_rec (char* s)
{
    if (s[0] != '\0'){
        printf("%c", s[0]);
        imprime_rec(&s[1]);
    }
    else
        printf("\n");
}

int main (void)
{
    char a[] = "alguma coisa aqui";

    imprime_rec(a);

    return 0;
}