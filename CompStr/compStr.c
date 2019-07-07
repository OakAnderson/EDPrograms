#include <stdio.h>

/*Função que compara duas strings e retorna a frase que deve
anteceder a outra */
int compara (char* s1, char* s2)
{
    int i;

    /*Compara caractere por caractere */
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
    }

    /*Compara se as cadeias têm o mesmo comprimento */
    if (s1[i] == s2[i])
        return 0;           /*Cadeias iguais */
    else if (s2[i] != '\0')
        return -1;          /*s1 é menor, pois tem menos caracteres */
    else
        return 1;           /*s2 é menor, por tem menos caracteres */
}

int main (void)
{
    char a[81];
    char b[81];
    int c;

    printf("Digite uma frase: "); scanf(" %[^\n]", a);
    printf("Digite uma frase: "); scanf(" %[^\n]", b);

    c = compara(a, b);

    if (c == -1)
        printf("A frase \"%s\" antecede a frase \"%s\"\n", a, b);
    else if (c == 1)
        printf("A frase \"%s\" antecede a frase \"%s\"\n", b, a);
    else
        printf("As frases são iguais.\n");
}
